/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** main.cpp
*/

#include <iostream>

#include "src/module/MonitorModule.hpp"
#include "src/display/MonitorDisplay.hpp"

#include "src/module/components/CPU.hpp"
#include "src/module/components/CGU.hpp"
#include "src/module/components/Meminfo.hpp"
#include "src/module/components/ExampleOverride.hpp"
#include "src/module/components/hostname.hpp"
#include "src/module/components/systemAndKernel.hpp"
#include "src/module/components/dateTime.hpp"
#include "src/module/components/network.hpp"

int main(int argc, char *argv[])
{
    MonitorDisplay display;
    if (argc > 1 && (std::string(argv[1]) == "sfml" || std::string(argv[1]) == "-s"))
        display.setNcurse(false);

    CPU test;
    Meminfo test3;
    hostname host;
    systemAndKernel systemk;
    dateTime dt;
    network net;


    display.linkModule(test);
    display.linkModule(test3);
    display.linkModule(host);
    display.linkModule(systemk);
    display.linkModule(dt);
    display.linkModule(net);
    display.initDisplay();

    while (display.getDisplayed()) {
        if (display.getNcurse() == true)
            display.initDisplay();
        else
            display.initDisplaySFML();
    }
    return (0);
}