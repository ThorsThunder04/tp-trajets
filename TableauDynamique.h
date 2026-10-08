#ifndef _TABDYN
#define _TABDYN

#include <iostream>
#include "Trajet.h"

class TableauDynamique {
    public:
    int alloue;
    int rempli;
    Trajet * tab[]; 

    TableauDynamique();
    TableauDynamique(const TableauDynamique& tabDyn);
    void agrandirTableau();
    void reduireTableau();
    void ajouteTrajet(const Trajet& _trajet);
    void supprimerTrajet(const Trajet& _trajet);
    int chercherTrajet(const Trajet& _trajet) const; // retourne l'indice dans le tableau

    Trajet& operator[](int indice);

    ~TableauDynamique();
};

#endif