
#include "ListeTrajet.h"
#include "Trajet.h"


ListeTrajet::ListeTrajet(Trajet* trajet) : taille(0) 
{
    liste = new CelluleListeTrajet{trajet, nullptr};
}

void ListeTrajet::ajouter(Trajet* trajet) {

    liste = new CelluleListeTrajet{trajet, liste};
    taille++;
}

bool ListeTrajet::suppression(Trajet* trajet) {
    CelluleListeTrajet* temp;

    if (liste == nullptr) return false;
    if (liste->getVal() == trajet) {
        temp = liste;
        liste = temp->getNext();
        delete temp;
        taille--;
        return true;
    };
    
    temp = liste;
    while (temp->getNext() != nullptr && temp->getNext()->getVal() != trajet) {
        temp = temp->getNext();
    }

    if (temp->getNext() != nullptr) {
        CelluleListeTrajet* toDelete = temp->getNext();
        temp->setNext(toDelete->getNext());
        delete toDelete;
        taille--;
        return true;
    }

    return false;
}

bool ListeTrajet::contient(Trajet* t) {

    CelluleListeTrajet* iter = liste;
    while (iter != nullptr && iter->getVal()) {
        iter = iter->getNext();
    }

    return (iter->getVal() == t);
}

unsigned int ListeTrajet::size() {
    return taille;
}

CelluleListeTrajet* ListeTrajet::getHead() { return liste ;}