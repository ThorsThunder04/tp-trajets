#ifndef _TRAJET_COMPOSE
#define _TRAJET_COMPOSE

#include "Trajet.h"
#include "ListeTrajet.h"

class TrajetCompose : public Trajet
{
    public:
        TrajetCompose(ListeTrajet* t);
        TrajetCompose(const TrajetCompose& trajet); // copy
        
        virtual ~TrajetCompose();

        bool includesTrajet(const Trajet* _trajet) const;

        bool operator==(const TrajetCompose* t) const;

        std::string stringuifier()const;
        
    protected:
        ListeTrajet* trajets;
};


#endif