//
// Created by Alexis Riot on 20/01/2020.
//

#include "SickKoala.hpp"

SickKoala::SickKoala(std::string name) {
    this->name = name;
}

SickKoala::~SickKoala() {
    std::cout << "Mr." << this->name << ": Kreooogg!! I'm cuuuured!" << std::endl;
}

void SickKoala::poke() {
    std::cout << "Mr." << this->name << ": Gooeeeeerrk!!" << std::endl;
}

bool SickKoala::takeDrug(std::string match) {
    if (match.compare("Mars") == 0) {
        std::cout << "Mr." << this->name << ": Mars, and it kreogs!" << std::endl;
        return (true);
    } else if (match.compare("Buronzand") == 0) {
        std::cout << "Mr." << this->name << ": And you'll sleep right away!" << std::endl;
        return (true);
    }
    std::cout << "Mr." << this->name << ": Goerkreog!" << std::endl;
    return (false);
}

void SickKoala::overDrive(std::string text) {
    size_t pos = 0;

    while ((pos = text.find("Kreog!", pos)) != std::string::npos)
        text.replace(pos, 6, "1337!");
    std::cout << "Mr." << this->name << ": " << text << std::endl;
}