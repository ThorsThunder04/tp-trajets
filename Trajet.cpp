#include "Trajet.h"
#include <cstring>


Trajet::Trajet(): depart(""), arrivee(""){}

Trajet::Trajet(const std::string& _depart, const std::string& _arrivee, enum Transport type) : depart(_depart), arrivee(_arrivee), typeTransport(type) {}