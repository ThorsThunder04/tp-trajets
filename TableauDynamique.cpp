#include "TableauDynamique.h"
#include "Trajet.h"
#include "TrajetSimple.h"
#include "TrajetCompose.h"
#include <iostream>

TableauDynamique::TableauDynamique(): alloue(5), rempli(0) {
    tab = new Trajet[5];
}

TableauDynamique::TableauDynamique(const TableauDynamique& tabDyn): alloue(tabDyn.alloue), rempli(tabDyn.rempli){
    int i;
    tab = new Trajet[alloue];

    for(i=0; i<rempli; i++){
        tab[i] = tabDyn.tab[i];
    }
}

void TableauDynamique::agrandirTableau(){
    Trajet * newTab;
    int i;
    alloue = 2* alloue;
    
    newTab = new Trajet[alloue];

    for(i=0; i<rempli; i++){
        newTab[i] = tab[i];
    }

    delete [] tab;
    tab = newTab;
}

void TableauDynamique::reduireTableau(){
    Trajet * newTab;
    int i;
    alloue = alloue - alloue / 3;
    
    newTab = new Trajet[alloue];

    for(i=0; i<rempli; i++){
        newTab[i] = tab[i];
    }

    delete [] tab;
    tab = newTab;
}

void TableauDynamique::ajouteTrajet(const Trajet& _trajet){
    if(typeof(_trajet)==TrajetSimple){
       tab[rempli] = new TrajetSimple;
       rempli ++; 
    }
}