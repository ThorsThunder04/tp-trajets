#include "TableauDynamique.h"
<<<<<<< HEAD
#include "TrajetSimple.h"
#include "Trajet.h"
#include "TrajetSimple.h"
#include "TrajetCompose.h"
#include <iostream>

TableauDynamique::TableauDynamique(): alloue(5), rempli(0) {
    tab[0] = nullptr;
}

TableauDynamique::TableauDynamique(const TableauDynamique& tabDyn): alloue(tabDyn.alloue), rempli(tabDyn.rempli){
    int i;

    for(i=0; i<rempli; i++){
        if(typeid(tabDyn.tab[i]).name()==typeid(TrajetSimple).name()){
            tab[rempli] = new TrajetSimple;
        }
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
    if(alloue == rempli) agrandirTableau();

    if(typeof(_trajet)==TrajetSimple){
       tab[rempli] = new TrajetSimple;
    }
    else{
        tab[rempli] = new TrajetCompose;
    }
    rempli ++; 
}

int TableauDynamique::chercherTrajet(const Trajet& _trajet) const{
    int i;
    for(i=0; i<rempli; i++){
        if(tab[i]==_trajet){
            return i;
        }
    }
}

void TableauDynamique::supprimerTrajet(const Trajet& _trajet){
    int i;
    int indice = chercherTrajet(_trajet);
    Trajet* newTab = new Trajet[alloue];

    for(i=0; i<rempli; i++){
        
    }
}
=======
#include <iostream>

>>>>>>> ed60b2d14a8692816eb43c80f97df2dd4f02f118
