
#include <iostream>
#include "ListeTrajet.h"
#include "TrajetSimple.h"


int main() {


    TrajetSimple ts1{"Paris", "Lyon", TRAIN};    
    TrajetSimple ts2{"Lyon", "Montpellier", TRAIN};    

    std::cout << ts1.stringuifier() << std::endl;
    std::cout << ts2.stringuifier() << std::endl;
    

    return 0;
}