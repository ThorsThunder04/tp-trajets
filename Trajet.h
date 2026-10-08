#ifndef _TRAJET
#define _TRAJET

#include <iostream>
#include <cstring>

<<<<<<< HEAD
enum Transport{
    PIETON,
    VOITURE,
    BUS,
    AVION,
    TRAIN
};

=======
>>>>>>> ed60b2d14a8692816eb43c80f97df2dd4f02f118
class Trajet{
    protected:
        std::string depart;
        std::string arrivee;
<<<<<<< HEAD
        enum Transport typeTransport;

    public:
        Trajet();
        Trajet(const std::string& _depart, const std::string& _arrivee, enum Transport);
=======

    public:
        Trajet();
        Trajet(const std::string& _depart, const std::string& _arrivee);
>>>>>>> ed60b2d14a8692816eb43c80f97df2dd4f02f118
        
        virtual std::string stringuifier() = 0;
    
};

#endif