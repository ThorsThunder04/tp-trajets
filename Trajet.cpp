#include "Trajet.h"
#include <cstring>


Trajet::Trajet(): depart(""), arrivee(""){}

Trajet::Trajet(const std::string& _depart, const std::string& _arrivee, enum Transport type) : depart(_depart), arrivee(_arrivee), typeTransport(type) {}

enum Transport int2transport(int x){
    switch (x) {
        case 1: return PIETON;
        case 2: return VOITURE;
        case 3: return BUS;
        case 4: return AVION;
        case 5: return TRAIN;
        default: return PIETON;    
    }
}
