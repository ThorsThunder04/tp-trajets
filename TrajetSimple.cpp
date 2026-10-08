#include "TrajetSimple.h"
#include "Trajet.h"
#include <iostream>
#include <cstring>

TrajetSimple::TrajetSimple(): Trajet(){}
TrajetSimple::TrajetSimple(const std::string& _depart, const std::string& _arrivee, enum Transport type):Trajet(_depart, _arrivee, type){}
TrajetSimple::TrajetSimple(const TrajetSimple& _trajet): Trajet(_trajet.depart, _trajet.arrivee, _trajet.typeTransport){}