/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** hostname
*/

#include "hostname.hpp"

hostname::hostname() : MonitorModule("Hostname Username", "", {""}) 
{
}

hostname::~hostname()
{ 
}

void hostname::setInformations()
{
    this->resetContent();

    if (std::getenv("HOSTNAME") == NULL)
        setContent("Unknown hostname");
    else {
        char hostname[12] = "Hostname: ";
        setContent(hostname + std::string(std::getenv("HOSTNAME")));
    }
    if (std::getenv("USER") == NULL)
        setContent("Unknown USER");
    else {
        char username[12] = "Username: ";
    setContent(username + std::string(std::getenv("USER")));
    }
}