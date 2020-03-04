/*
** EPITECH PROJECT, 2020
** cpp_d13_2019
** File description:
** Toy.hpp
*/

#ifndef CPP_D13_2019_TOY_HPP
#define CPP_D13_2019_TOY_HPP

#include <iostream>
#include "Picture.hpp"

class Toy {
public:

    enum ToyType {
        BASIC_TOY,
        ALIEN,
        BUZZ,
        WOODY
    };

    Toy(ToyType type, std::string name, std::string file);
    Toy();
    ~Toy();
    Toy &operator=(Toy const &);

    const std::string &getName() const;
    const std::string &getAscii() const;
    const ToyType getType() const;
    void setName(std::string const &name);
    bool setAscii(std::string const &file);

private:
protected:

    ToyType type;
    std::string name;
    Picture picture;
};


#endif //CPP_D13_2019_TOY_HPP
