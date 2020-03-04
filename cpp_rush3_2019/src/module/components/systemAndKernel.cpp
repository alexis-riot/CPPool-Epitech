/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** systemAndKernel
*/

#include "systemAndKernel.hpp"

systemAndKernel::systemAndKernel() : MonitorModule("Operating System Kernel Version", "", {""}) 
{
}

systemAndKernel::~systemAndKernel()
{ 
}

void systemAndKernel::setInformations()
{
    this->resetContent();

    std::ifstream informations("/etc/redhat-release", std::ios::in);
    if (informations) {
        getline(informations, _data, '\0');
        setContent("Operating System: " + _data);
        informations.close();
    } else {
        setContent("unknwown path");
    }
    std::ifstream information("/proc/version", std::ios::in);
    if (informations) {
        getline(information, _data, '(');
        setContent("Kernel Version: " + _data);
        informations.close();
    } else {
        setContent("unknwown path");
    }
}