/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** network
*/

#ifndef NETWORK_HPP_
#define NETWORK_HPP_

#include "../MonitorModule.hpp"
#include <cstdlib>
#include <cstring>
#include <string>

class network : public MonitorModule {
public:
    network();
    ~network();
    void setInformations() override;
private:
    std::string _data;
protected:
};

#endif /* !NETWORK_HPP_ */
