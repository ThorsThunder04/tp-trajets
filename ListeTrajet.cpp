#include "ListeTrajet.h"
#include "Trajet.h"
#include "TrajetCompose.h"
#include "TrajetSimple.h"


ListeTrajet::ListeTrajet(Trajet* trajet) : taille(0) 
{
    liste = new CelluleListeTrajet{trajet, nullptr};
}

ListeTrajet::~ListeTrajet() {

    CelluleListeTrajet* prev = liste;
    CelluleListeTrajet* curr = liste->getNext();
    while (curr!=nullptr) {
        delete prev;
        prev = curr;
        curr = curr->getNext();
    }
    delete prev;
}

void ListeTrajet::ajouter(Trajet* trajet) {

    liste = new CelluleListeTrajet{trajet, liste};
    taille++;
}

bool ListeTrajet::suppression(const Trajet* trajet) {
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

bool ListeTrajet::contient(const Trajet* t) const {

    CelluleListeTrajet* iter = liste;
    while (iter != nullptr && iter->getVal()) {
        iter = iter->getNext();
    }

    return (iter->getVal() == t);
}

unsigned int ListeTrajet::size() const {
    return taille;
}

CelluleListeTrajet* ListeTrajet::getHead() const { return liste ;}

std::string ListeTrajet::stringuifier() const {
    CelluleListeTrajet* iter = liste;
    std::string out = "[\n";
    while (iter != nullptr) {
        out += "\t";
        out += iter->getVal()->stringuifier() + "\n";
        iter = iter->getNext();
    }
    out += "]";

    return out;
}