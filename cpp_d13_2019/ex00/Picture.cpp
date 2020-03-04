/*
** EPITECH PROJECT, 2020
** cpp_d13_2019
** File description:
** Picture.cpp
*/

#include "Picture.hpp"

Picture::Picture(const std::string &file) {
    this->getPictureFromFile(file);
}

Picture::Picture() {
    this->data = "";
}

Picture::~Picture() {}

Picture& Picture::operator=(Picture const &picture) {
    this->data = picture.data;
    return (*this);
}

bool Picture::getPictureFromFile(const std::string &file) {
    std::ifstream sfile;

    sfile.open(file);
    if (!sfile.is_open()) {
        this->data = "ERROR";
        return (false);
    }
    while (std::getline(sfile, this->data, '\0'));
    sfile.close();
    return (true);
}