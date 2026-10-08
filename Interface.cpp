#include "Interface.h"
#include <iostream>
#include "Catalogue.h"
#include "ListeTrajet.h"
#include "TrajetSimple.h"
#include "Trajet.h"
#include <cstring>

using namespace std;

bool Interface::validerSaisie()const{
    char c;
    cout << "Valider saisie ? (y/n)";
    cin >> c;
    if(c!='y') return false;
    return true;
}

void Interface::afficherMenu()const{
    cout << "\t\tBienvenue sur le catalogue de trajets\n\n"
        << "\t1. ajouter un trajet\n"
        << "\t2. supprimer un trajet\n"
        << "\t3. afficher les trajets\n"
        << "\t4. chercher un trajet\n";
}

void Interface::ajouterTrajetSimple(ListeTrajet* l)const{
    string depart;
    string arrivee;
    int typeTransport;
    bool ok = false;
    char n;

    while(!ok){
        cout << "Pour ajouter un trajet veuillez saisir le départ:";
       cin >> depart;
       if(validerSaisie()) ok = true;
    }

    ok = false;

    while(!ok){
        cout << "Veuillez saisir l'arrivée:";
       cin >> arrivee;
       if(validerSaisie()) ok = true;
    }

    ok = false;

    while(!ok){
        cout << "Veuillez saisir le type de transport : ";
        cout << "\t1. PIETON\n"
            << "\t2. VOITURE\n"
            << "\t3. BUS\n"
            << "\t4. AVION\n"
            << "\t5. TRAIN\n";
        cin >> typeTransport;
        if(validerSaisie()) ok = true;
    }

    enum Transport type = int2transport(typeTransport);
    TrajetSimple* t = new TrajetSimple{depart, arrivee, type};
    l->ajouter(t);
}

void Interface::ajouterTrajetCompose(Catalogue* c)const{
    bool ok = false;
    string depart;
    string arrivee;
    int nbTrajet;

    while(!ok){
       cout << "Veuillez saisir la ville de départ (globale):";
       cin >> depart;
       if(validerSaisie()) ok = true;
    }

    ok = false;

    while(!ok){
        cout << "Veuillez saisir la ville d'arrivée (globale):";
        cin >> arrivee;
        if(validerSaisie()) ok = true;
    }

    ok = false;

    while(!ok){
        cout << "Veuillez rentrer le nombre de trajet qui compose ce trajet composé:";
        cin >> nbTrajet;
        if(validerSaisie()) ok = true;
    }

    ok = false;

    for(int i = 0; i < nbTrajet; i++){

    }
}

void Interface::runApp(Catalogue* c)const{
    while(true){
        afficherMenu();
        int choix;
        cin >> choix;

        switch(choix){
            //case 1: 
        }
    }   
}
