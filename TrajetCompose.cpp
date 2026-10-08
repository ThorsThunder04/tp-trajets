
#include "Trajet.h"
#include "TrajetCompose.h"

TrajetCompose::TrajetCompose(Trajet t[], int n) : Trajet() {

    nTrajets = n;    
    trajets = new Trajet*[n];
    for (int i = 0; i < n; i++) {
            if (typeid(t[i]) == typeid(TrajetCompose)) {
                trajets[i] = new TrajetCompose;
            } else if (typeid(t[i]) == typeid(TrajetSimple)) {
                trajets[i] = new TrajetSimple;
            }
            *trajets[i] = t[i];
    }
    depart = trajets[0].depart;
    arrivee = trajets[n-1].arrivee;
}
        
        ~TrajetCompose() {
        }

        void ajouterTrajet(Trajet t);
        void supprimerTrajet(Trajet t);
        bool includesTrajet(Trajet t);

        void operator==(Trajet t);
    