/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** MonitorDisplay.hpp
*/

#ifndef CPP_RUSH3_2019_MONITORDISPLAY_HPP
#define CPP_RUSH3_2019_MONITORDISPLAY_HPP

#include <vector>
#include <memory>
#include <algorithm>
#include <ncurses.h>
#include <ctime>

#include "../module/MonitorModule.hpp"

class IMonitorDisplay {
public:
    virtual ~IMonitorDisplay() {};

    virtual bool getDisplayed() const = 0;
    virtual void setDisplayed(bool display) = 0;
    virtual void initDisplay(void) = 0;
    virtual void initDisplaySFML(void) = 0;
    virtual void initBoxes(void) = 0;
    virtual void refreshDisplay(void) = 0;

    virtual void getKeyboard(void) = 0;

    virtual bool getNcurse(void) const = 0;
    virtual void setNcurse(bool) = 0;

    virtual size_t countModules() const = 0;

    virtual void linkModule(IMonitorModule &module) = 0;
    virtual void unlinkModule(IMonitorModule &module) = 0;

    virtual void displayModule(IMonitorModule &module, bool display) = 0;
private:
protected:
    bool _displayed;
    bool _ncurse;
    std::vector<IMonitorModule *> _modules;
};


class MonitorDisplay : public IMonitorDisplay {
public:
    MonitorDisplay();
    virtual ~MonitorDisplay();

    bool getDisplayed() const;
    void setDisplayed(bool display);
    void initDisplay(void);
    void initDisplaySFML(void);
    void initBoxes(void);
    void refreshDisplay(void);

    void getKeyboard(void);

    bool getNcurse(void) const;
    void setNcurse(bool);

    size_t countModules() const;

    void linkModule(IMonitorModule &module);
    void unlinkModule(IMonitorModule &module);

    void displayModule(IMonitorModule &module, bool display);

private:
protected:
};


#endif //CPP_RUSH3_2019_MONITORDISPLAY_HPP
