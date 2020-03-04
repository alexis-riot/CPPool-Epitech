/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** ExampleOverride.hpp
*/

#ifndef CPP_RUSH3_2019_EXAMPLEOVERRIDE_HPP
#define CPP_RUSH3_2019_EXAMPLEOVERRIDE_HPP

#include "../MonitorModule.hpp"

class ExampleOverride : public MonitorModule {
public:
    ExampleOverride();
    ~ExampleOverride();

    void setInformations() override;

private:
protected:
};


#endif //CPP_RUSH3_2019_EXAMPLEOVERRIDE_HPP
