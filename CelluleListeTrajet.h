#ifndef __CELLULE_LISTE_TRAJET_H
#define __CELLULE_LISTE_TRAJET_H
#include "Trajet.h"

class CelluleListeTrajet {
    private:
        Trajet* val;
        CelluleListeTrajet* next;
    
    public:

        CelluleListeTrajet(Trajet* trajet);
        CelluleListeTrajet(Trajet* trajet, CelluleListeTrajet* queue);
        
        
        CelluleListeTrajet* getNext();
        Trajet* getVal();

        void setNext(CelluleListeTrajet* cellule);
        void setVal(Trajet* newVal) { val = newVal; }
};

#endif