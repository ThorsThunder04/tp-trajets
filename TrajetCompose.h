#include "Trajet.h"

#ifndef _TRAJET_COMPOSE
#define _TRAJET_COMPOSE

class TrajetCompose : Trajet
{
    public:
        TrajetCompose(Trajet t[], int n);
        TrajetCompose(const TrajetCompose& trajet); // copy
        
        virtual ~TrajetCompose();

        bool includesTrajet(Trajet t);

        void operator==(Trajet t);
    
    protected:
        Trajet** trajets;
        unsigned int nTrajets;
};


#endif