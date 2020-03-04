//
// Created by Alexis Riot on 20/01/2020.
//

#ifndef HOSPITAL_KOALANURSE_H
#define HOSPITAL_KOALANURSE_H

#include <iostream>
#include <fstream>
#include <string>
#include "SickKoala.hpp"

class KoalaNurse {
    public:
        int id;
        int work;

        KoalaNurse(int id);
        ~KoalaNurse(void);

        void giveDrug(std::string drug, SickKoala *sickKoala);
        std::string readReport(std::string report);
        void timeCheck();

    private:
};


#endif //HOSPITAL_KOALANURSE_H
