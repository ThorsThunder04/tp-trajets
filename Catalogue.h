#ifndef _CATALOGUE
#define _CATALOGUE

#include "ListeTrajet.h"
#include "Trajet.h"

class Catalogue{
    private:
    ListeTrajet * liste;

    public:
    Catalogue();

    void ajouterTrajet(Trajet* _trajet);
    void supprimerTrajet(Trajet* _trajet);
    bool chercherTrajet(const Trajet* _trajet)const;
    void afficherCatalogue()const;
    ListeTrajet* getHead();

};

#endif
