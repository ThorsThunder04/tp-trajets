#include "Trajet.h"
#include "ListeTrajet.h"
#include "TrajetCompose.h"

TrajetCompose::TrajetCompose(const ListeTrajet* t): trajets(t){}

TrajetCompose::TrajetCompose(const TrajetCompose& _trajet){
    trajets = _trajet.trajets;
} 
        
TrajetCompose::~TrajetCompose(){
    delete trajets;
}

bool TrajetCompose::includesTrajet(const Trajet* t) const{
    return trajets->contient(t);
}

bool TrajetCompose::operator==(const Trajet& t) const{
}