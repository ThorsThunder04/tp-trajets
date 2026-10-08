#include "CelluleListeTrajet.h"
#include "Trajet.h"
#include "ListeTrajet.h"
#include "TrajetCompose.h"
#include <cstring>

using namespace std;

TrajetCompose::TrajetCompose(ListeTrajet* t): trajets(t){}

TrajetCompose::TrajetCompose(const TrajetCompose& _trajet){
    trajets = _trajet.trajets;
} 
        
TrajetCompose::~TrajetCompose(){
    delete trajets;
}

bool TrajetCompose::includesTrajet(const Trajet* t) const{
    return trajets->contient(t);
}

bool TrajetCompose::operator==(const TrajetCompose* t) const{
    if(trajets->size()!=t->trajets->size()) return false;

    CelluleListeTrajet* t1 = trajets->getHead();
    CelluleListeTrajet* t2 = t->trajets->getHead();
    
    while(t1!=nullptr){
        if(typeid(t1)!=typeid(t2)) return false;
        if(t1==t2){
            t1 = t1->getNext();
            t2 = t2->getNext();
        }
        else return false;
    }

    if(t2==nullptr) return true;
    else return false;
}

string TrajetCompose::stringuifier()const{
    return trajets->stringuifier();
}