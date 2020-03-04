/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** MonitorModule.cpp
*/

#include "MonitorModule.hpp"
#include <iostream>

MonitorModule::MonitorModule(const std::string &name, const std::string &filePath, const std::array<std::string, IMonitorModule::MAX_CONTENT> &parameters) {
    this->_name = std::move(name);
    this->_filePath = std::move(filePath);
    this->_parameters = parameters;
    this->_displayed = true;
}

MonitorModule::~MonitorModule() {}

const std::string & MonitorModule::getName() const {
    return this->_name;
}

void MonitorModule::setName(const std::string &name) {
    this->_name = name;
}

const std::string *MonitorModule::getContent() const {
    return this->_content;
}

void MonitorModule::setContent(const std::string &content) {
    for (int i = 0; i < IMonitorModule::MAX_CONTENT; i++) {
        if (this->getContent()[i].empty()) {
            this->_content[i] = content;
            break;
        }
    }
}

void MonitorModule::resetContent() {
    for (int i = 0; i < IMonitorModule::MAX_CONTENT; i++) {
        this->_content[i].clear();
    }
}

const std::array<std::string, IMonitorModule::MAX_CONTENT> & MonitorModule::getParameters() const {
    return this->_parameters;
}

void MonitorModule::setParameters(const std::array<std::string, IMonitorModule::MAX_CONTENT> &parameters) {
    this->_parameters = parameters;
}

const std::string & MonitorModule::getFilePath() const {
    return this->_filePath;
}

void MonitorModule::setFilePath(const std::string &filePath) {
    this->_filePath = filePath;
}

void MonitorModule::setInformations() {
    std::ifstream file(this->getFilePath().c_str(), std::ios::in);
    std::string line;

    this->resetContent();

    if (!file)
        return this->setContent("Cannot get informations.");

    for(auto& s: this->getParameters()) {
        if (s.empty())
            continue;

        while (getline(file, line)) {
            if (line.find(s.c_str()) != std::string::npos) {
                this->setContent(line);
                break;
            }
        }
    }
}

WINDOW * MonitorModule::getWindow() const {
    return this->_window;
}

void MonitorModule::setWindow(WINDOW *window) {
    this->_window = window;
}

const bool & MonitorModule::getDisplayed() const {
    return this->_displayed;
}

void MonitorModule::setDisplayed(bool display) {
    this->_displayed = display;
}