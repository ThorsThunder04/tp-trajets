#ifndef _INTERFACE
#define _INTERFACE

#include <iostream>
#include "Catalogue.h"
#include "ListeTrajet.h"

class Interface{
    public:
    void afficherMenu()const;
    void ajouterTrajetSimple(ListeTrajet* l)const;
    void ajouterTrajetCompose(Catalogue* c)const;
    void supprimerTrajet(Catalogue* c)const;
    void chercherTrajet(Catalogue* c)const;
    void runApp(Catalogue* c)const;
    bool validerSaisie()const;
};

#endif