/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** network
*/

#include "network.hpp"

network::network() : MonitorModule("network", "", {""})
{
}

network::~network()
{ 
}

void network::setInformations()
{this->resetContent();

    std::ifstream informations("/proc/net/dev", std::ios::in);
    if (informations) {
        getline(informations, _data, '\0');
        std::string save = _data.substr(207, 10);
        setContent("Byte Receive: " + save + '\n');
        std::string save2 = _data.substr(267, 10);
        setContent("Byte Transmit: " + save2);
        informations.close();
    } else {
        setContent("unknwown path");
    }
}