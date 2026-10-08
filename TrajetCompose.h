#ifndef _TRAJET_COMPOSE
#define _TRAJET_COMPOSE

#include "Trajet.h"
#include "ListeTrajet.h"

class TrajetCompose : Trajet
{
    public:
        TrajetCompose(const ListeTrajet* t);
        TrajetCompose(const TrajetCompose& trajet); // copy
        
        virtual ~TrajetCompose();

        bool includesTrajet(const Trajet* _trajet) const;

        bool operator==(const Trajet& t) const;
    
    protected:
        ListeTrajet* trajets;
};


#endif