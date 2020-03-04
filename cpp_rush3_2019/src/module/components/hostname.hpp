/*
** EPITECH PROJECT, 2020
** cpp_rush3_2019
** File description:
** hostrname
*/

#ifndef HOSTRNAME_HPP_
#define HOSTRNAME_HPP_

#include "../MonitorModule.hpp"
#include <cstdlib>
#include <cstring>
#include <string>

class hostname : public MonitorModule {
public:
    hostname();
    ~hostname();
    void setInformations() override;
private:
    std::string _data;
protected:
};

#endif /* !HOSTRNAME_HPP_ */
