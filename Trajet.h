#ifndef _TRAJET
#define _TRAJET

#include <iostream>
#include <cstring>

enum Transport{
    PIETON = 1,
    VOITURE = 2,
    BUS = 3,
    AVION = 4,
    TRAIN = 5
};

class Trajet{
    protected:
        std::string depart;
        std::string arrivee;
        enum Transport typeTransport;

        Trajet();
        Trajet(const std::string _depart, const std::string _arrivee, enum Transport);
        
        virtual std::string stringuifier() = 0;
    
};

#endif