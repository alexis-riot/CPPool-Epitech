/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** systemAndKernel
*/

#ifndef SYSTEMANDKERNEL_HPP_
#define SYSTEMANDKERNEL_HPP_

#include "../MonitorModule.hpp"
#include <cstdlib>
#include <cstring>
#include <string>
#include <ctime>

class systemAndKernel : public MonitorModule {
public:
    systemAndKernel();
    ~systemAndKernel();
    void setInformations() override;
private:
    std::string _data;
protected:
};

#endif /* !SYSTEMANDKERNEL_HPP_ */
