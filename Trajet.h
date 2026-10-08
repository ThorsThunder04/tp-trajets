#ifndef _TRAJET
#define _TRAJET

#include <iostream>
#include <cstring>

class Trajet{
    protected:
        std::string depart;
        std::string arrivee;

    public:
        Trajet();
        Trajet(const std::string& _depart, const std::string& _arrivee);
        
        virtual std::string stringuifier() = 0;
    
};

#endif