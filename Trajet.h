#ifndef _TRAJET
#define _TRAJET

#include <iostream>
#include <cstring>

enum Transport{
    PIETON,
    VOITURE,
    BUS,
    AVION,
    TRAIN
};

class Trajet{
    protected:
        std::string depart;
        std::string arrivee;
        enum Transport typeTransport;

    public:
        Trajet();
        Trajet(const std::string& _depart, const std::string& _arrivee, enum Transport);
        
        virtual std::string stringuifier() = 0;
    
};

#endif