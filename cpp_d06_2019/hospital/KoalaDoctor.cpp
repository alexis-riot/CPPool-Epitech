//
// Created by Alexis Riot on 20/01/2020.
//

#include "KoalaDoctor.hpp"

KoalaDoctor::KoalaDoctor(std::string name) {
    this->name = name;
    std::cout << "Dr." << this->name << ": I'm Dr."<< this->name <<"! How do you kreog ?" << std::endl;
}

KoalaDoctor::~KoalaDoctor() {
    this->name = "";
}

std::string KoalaDoctor::getName() {
    return this->name;
}

void KoalaDoctor::diagnose(SickKoala *koala) {
    //
}