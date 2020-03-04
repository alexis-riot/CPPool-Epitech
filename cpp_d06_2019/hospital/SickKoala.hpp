//
// Created by Alexis Riot on 20/01/2020.
//

#ifndef CPP_D06_2019_SICKKOALA_H
#define CPP_D06_2019_SICKKOALA_H

#include <iostream>
#include <string>

class SickKoala {
    public:
        SickKoala(std::string name);
        ~SickKoala(void);
        void poke(void);
        bool takeDrug(std::string match);
        void overDrive(std::string text);
    private:
        std::string name;
};


#endif //CPP_D06_2019_SICKKOALA_H
