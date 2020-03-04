/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** MonitorModule.hpp
*/

#ifndef CPP_RUSH3_2019_MONITORMODULE_HPP
#define CPP_RUSH3_2019_MONITORMODULE_HPP

#include <string>
#include <iostream>
#include <ios>
#include <fstream>
#include <array>

#include <ncurses.h>

class IMonitorModule {
public:
    static const int MAX_CONTENT = 18;

    virtual ~IMonitorModule() {};

    virtual const std::string &getName() const = 0;
    virtual void setName(const std::string &name) = 0;

    virtual const std::string *getContent() const = 0;
    virtual void setContent(const std::string &content) = 0;
    virtual void resetContent() = 0;

    virtual const std::array<std::string, IMonitorModule::MAX_CONTENT> &getParameters() const = 0;
    virtual void setParameters(const std::array<std::string, IMonitorModule::MAX_CONTENT> &parameters) = 0;

    virtual const std::string &getFilePath() const = 0;
    virtual void setFilePath(const std::string &filePath) = 0;
    virtual void setInformations() = 0;

    virtual void setWindow(WINDOW *window) = 0;
    virtual WINDOW *getWindow() const = 0;
    
    virtual const bool &getDisplayed() const = 0;
    virtual void setDisplayed(bool displayed) = 0;

private:
protected:
    std::string _name;
    std::string _filePath;
    std::string _content[IMonitorModule::MAX_CONTENT];
    std::array<std::string, IMonitorModule::MAX_CONTENT> _parameters;
    WINDOW *_window;
    bool _displayed;
};

class MonitorModule : public IMonitorModule {
public:
    ~MonitorModule();

    const std::string &getName() const;
    void setName(const std::string &name);

    const std::string *getContent() const;
    void setContent(const std::string &content);
    void resetContent();

    const std::array<std::string, IMonitorModule::MAX_CONTENT> &getParameters() const;
    void setParameters(const std::array<std::string, IMonitorModule::MAX_CONTENT> &parameters);

    const std::string &getFilePath() const;
    void setFilePath(const std::string &filePath);
    void setInformations();

    void setWindow(WINDOW *window);
    WINDOW *getWindow() const;

    const bool &getDisplayed() const;
    void setDisplayed(bool displayed);

private:
protected:
    MonitorModule(const std::string &name, const std::string &filePath, const std::array<std::string, IMonitorModule::MAX_CONTENT> &parameters);
};


#endif //CPP_RUSH3_2019_MONITORMODULE_HPP
