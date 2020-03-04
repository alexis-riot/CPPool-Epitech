/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** dateTime
*/

#include "dateTime.hpp"

dateTime::dateTime() : MonitorModule("dateTime", "", {""})
{
}

dateTime::~dateTime()
{ 
}

void dateTime::setInformations()
{
    this->resetContent();
    time_t now = time(0);
    char* dt = ctime(&now);
    setContent("Date Time: " + std::string(dt));
}