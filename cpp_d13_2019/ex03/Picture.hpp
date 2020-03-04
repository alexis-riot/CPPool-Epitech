/*
** EPITECH PROJECT, 2020
** cpp_d13_2019
** File description:
** Picture.hpp
*/

#ifndef CPP_D13_2019_PICTURE_HPP
#define CPP_D13_2019_PICTURE_HPP

#include <iostream>
#include <fstream>

class Picture {
public:
    Picture(const std::string &file);
    Picture();
    ~Picture();
    Picture &operator=(Picture const &);


    bool getPictureFromFile(const std::string &file);

    std::string data;

private:
protected:
};


#endif //CPP_D13_2019_PICTURE_HPP
