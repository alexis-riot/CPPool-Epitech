//
// Created by Alexis Riot on 20/01/2020.
//

#include "KoalaNurse.hpp"

KoalaNurse::KoalaNurse(int id) {
    this->id = id;
    this->work = false;
}

KoalaNurse::~KoalaNurse() {
    std::cout << "Nurse " << this->id << ": Finally some rest!" << std::endl;
}

void KoalaNurse::giveDrug(std::string drug, SickKoala *sickKoala) {
    if (sickKoala)
        sickKoala->takeDrug(drug);
}

std::string KoalaNurse::readReport(std::string report) {
    std::ifstream file;
    std::string name;
    std::string drug;

    if (report.substr(report.find_last_of(".") + 1) == ".report") {
        name = report.substr(0, report.find("."));
        file.open(report.c_str());
        if (file.is_open())
            getline(file, drug);
        if (!drug.empty())
            std::cout << "Nurse " << this->id << ": Kreog! Mr." << name << " needs a " << drug << "!" << std::endl;
    }
    return (drug);
}

void KoalaNurse::timeCheck() {
    if (this->work) {
        std::cout << "Nurse " << this->id << ": Time to go home to my eucalyptus forest!" << std::endl;
        this->work = false;
    } else {
        std::cout << "Nurse " << this->id << ": Time to get to work!" << std::endl;
        this->work = true;
    }
}