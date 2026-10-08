#ifndef _CATALOGUE
#define _CATALOGUE

#include "ListeTrajet.h"
#include "Trajet.h"

class Catalogue{
    private:
    ListeTrajet * liste;

    public:
    Catalogue();

    void ajouterTrajet(const Trajet& _trajet);
    void supprimerTrajet(const Trajet& _trajet);
    Trajet& chercherTrajet(const Trajet& _trajet)const;
    void afficherCatalogue()const;

};

#endif
