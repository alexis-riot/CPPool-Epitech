/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** MonitorDisplay.cpp
*/

#include "MonitorDisplay.hpp"
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>


MonitorDisplay::MonitorDisplay() {
    this->_displayed = true;
    this->_ncurse = true;
}

MonitorDisplay::~MonitorDisplay() {}

bool MonitorDisplay::getDisplayed() const {
    return this->_displayed;
}

void MonitorDisplay::setDisplayed(bool display) {
    this->_displayed = display;
}

bool MonitorDisplay::getNcurse() const
{
    return (this->_ncurse);
}

void MonitorDisplay::setNcurse(bool ncurse)
{
    this->_ncurse = ncurse;
}

void MonitorDisplay::initDisplay() {
    initscr();
    nodelay(stdscr, true);
    cbreak();
    curs_set(FALSE);
    noecho();
    nodelay(stdscr, true);

    this->initBoxes();

    while (this->getDisplayed() && this->getNcurse()) {
        this->refreshDisplay();
        this->getKeyboard();
    }
    refresh();
    endwin();
}

void MonitorDisplay::initDisplaySFML() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "mygkrellm", sf::Style::Default);
    sf::Vector2u size = window.getSize();
    sf::RectangleShape rect;
    std::string save;
    std::string line;
    std::ifstream file;
    sf::Text text;
    sf::Font font;
    font.loadFromFile("asset/starFont.ttf");
    text.setFont(font);

    rect.setFillColor(sf::Color(120, 120, 120, 255));
    rect.setSize(sf::Vector2f(size.x - 20, size.y - 20));
    rect.setPosition(sf::Vector2f(10, 10));
    while (window.isOpen()) {
        size = window.getSize();
        file.open("/proc/cpuinfo");

        while (getline(file, line)) {
            if (line.find("cpu MHz") != std::string::npos)
                save = line;
        }
        file.close();
        line.clear();
        window.clear(sf::Color(50, 50, 50, 255));
        window.draw(rect);
        text.setString(save);
        text.setCharacterSize(12);
        text.setPosition(sf::Vector2f(20, 20));
        save.clear();
        text.setFillColor(sf::Color::Black);
        window.draw(text);
        window.display();
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::KeyPressed) {
                if (event.key.code == sf::Keyboard::Escape || event.key.code == sf::Keyboard::Q) {
                    window.close();
                    this->setDisplayed(false);
                }
                if (event.key.code == sf::Keyboard::S) {
                    this->setNcurse(true);
                    window.close();
                }
            }
            if (event.type == sf::Event::Closed) {
                window.close();
                this->setDisplayed(false);
            }
        }
    }
}

void MonitorDisplay::initBoxes() {
    int max_size = (this->countModules() % 2) ? this->countModules() + 1 : this->countModules();
    int i = 0, y = 0;

    for (auto &module : this->_modules) {
        if (!module->getDisplayed())
            continue;
        if (i <= (max_size / 2) - 1)
            module->setWindow(subwin(stdscr, LINES / 2, COLS / (max_size / 2), 0, COLS / (max_size / 2) * i));
        else
            module->setWindow(subwin(stdscr, LINES / 2, COLS / (max_size / 2), LINES / 2, COLS / (max_size / 2) * y++));
        box(module->getWindow(), ACS_VLINE, ACS_HLINE);
        wrefresh(module->getWindow());
        i++;
    }
}

void MonitorDisplay::getKeyboard()
{
    int key = 0;

    keypad(stdscr, TRUE);
    key = getch();
    if ((key == 's' || key == 'S') && this->getNcurse())
        this->setNcurse(false);
    if ((key == 's' || key == 'S') && !this->getNcurse())
        this->setNcurse(false);
    if (key == 'q' || key == 'Q' || key == 27)
        this->setDisplayed(false);
    for (int i = 1; this->_modules[i - 1] && i < 10; i++) {
        if (key == i + 48 && this->_modules[i - 1]->getDisplayed() == true)
            this->displayModule(*this->_modules[i - 1], false);
        else if (key == i + 48)
            this->displayModule(*this->_modules[i - 1], true);
    }
}

void MonitorDisplay::refreshDisplay() {
    for (auto &module : this->_modules) {
        if (!module->getDisplayed())
            continue;
        module->setInformations();

        if (module->getDisplayed()) {
            mvwprintw(module->getWindow(), 1, 1, module->getName().c_str());

            for (int i = 0; i < IMonitorModule::MAX_CONTENT; i++) {
                if (!module->getContent()[i].empty()) {
                    mvwprintw(module->getWindow(), (i + 2), 1, module->getContent()[i].c_str());
                }
            }
        }
        wrefresh(module->getWindow());
    }
}

size_t MonitorDisplay::countModules() const {
    size_t count = 0;

    for(auto&module: this->_modules) {
        if (module->getDisplayed())
            count++;
    }
    return (count);
}

void MonitorDisplay::linkModule(IMonitorModule &module) {
    this->_modules.push_back(&module);
}

void MonitorDisplay::unlinkModule(IMonitorModule &module) {
    this->_modules.erase(std::remove(this->_modules.begin(), this->_modules.end(), &module));
}

void MonitorDisplay::displayModule(IMonitorModule &module, bool display) {
    module.setDisplayed(display);
    wclear(stdscr);
    this->initBoxes();

}