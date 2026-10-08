#include <iostream>
#include "Interface.h"
#include "Catalogue.h"

int main() {
    Interface App;
    Catalogue C;
    
    std::cout << "Hello World!" << std::endl;

    App.runApp(&C);



    return 0;
}