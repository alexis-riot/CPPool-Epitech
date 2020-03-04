/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** dateTime
*/

#ifndef DATETIME_HPP_
#define DATETIME_HPP_

#include "../MonitorModule.hpp"
#include <cstdlib>
#include <cstring>
#include <string>

class dateTime : public MonitorModule {
public:
    dateTime();
    ~dateTime();
    void setInformations() override;
private:
    std::string _data;
protected:
};

#endif /* !DATETIME_HPP_ */
