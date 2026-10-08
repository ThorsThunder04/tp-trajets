#ifndef _TRAJETSIMPLE
#define _TRAJETSIMPLE

#include "Trajet.h"

class TrajetSimple : public Trajet{
    public:
    TrajetSimple();
    TrajetSimple(const std::string& _depart,const std::string& _arrivee, enum Transport type);
    TrajetSimple(const TrajetSimple& _trajet);
    
    std::string stringuifier() override;

};

#endif