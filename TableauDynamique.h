#ifndef _TABDYN
#define _TABDYN

#include <iostream>
#include "Trajet.h"

class TableauDynamique {
    public:
    int alloue;
    int rempli;
    Trajet * tab;
};

#endif