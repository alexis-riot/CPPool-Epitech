/*
** EPITECH PROJECT, 2020
** cpp_d10_2019
** File description:
** Sorcerer.hpp
*/

#ifndef CPP_D10_2019_SORCERER_HPP
#define CPP_D10_2019_SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer {
    public:
        Sorcerer(std::string name, std::string title);
        ~Sorcerer();

        std::string getName() const;
        std::string getTitle() const;
        void polymorph(const Victim &victim) const;

    private:
    protected:
        std::string name;
        std::string title;
};

std::ostream &operator<<(std::ostream &os, Sorcerer const &sorcerer);

#endif //CPP_D10_2019_SORCERER_HPP
