//
// Created by Alexis Riot on 20/01/2020.
//

#ifndef HOSPITAL_KOALADOCTOR_H
#define HOSPITAL_KOALADOCTOR_H


#include <string>
#include "SickKoala.hpp"

class KoalaDoctor {
    public:
        KoalaDoctor(std::string name);
        ~KoalaDoctor(void);

        std::string getName(void);
        void diagnose(SickKoala *koala);
        void timeCheck(void);

    private:
        std::string name;
};


#endif //HOSPITAL_KOALADOCTOR_H
