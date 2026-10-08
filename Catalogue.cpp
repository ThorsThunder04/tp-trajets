#include "Catalogue.h"
#include "Trajet.h"
#include <iostream>
#include "ListeTrajet.h"

Catalogue::Catalogue() : liste(new ListeTrajet{nullptr}){}

void Catalogue::ajouterTrajet(Trajet* _trajet){
    liste->ajouter(_trajet);
}

void Catalogue::supprimerTrajet(Trajet* _trajet){
    liste->suppression(_trajet);
}

bool Catalogue::chercherTrajet(const Trajet* _trajet) const{
    return liste->contient(_trajet);
}

ListeTrajet* Catalogue::getHead(){
    return liste;
}

void Catalogue::afficherCatalogue()const{

}