#include "Attribute.h"
#include <iostream>


//using functions
Attribute::Attribute() : rates(0){}
//using if statement
Attribute::Attribute(int _rates){
    if (_rates >= 0 && _rates <= 10) {
        //redefining the variables
        rates = _rates;
    }

    else {
        std::cout << "Invalid rating. Setting to 0." << std::endl;
        rates = 0;
    }
}
//getters
int Attribute::get_rates(){
    return rates;
    }
//setters
void Attribute::set_rates(int _rates){
    if (_rates >= 0 && _rates <= 10) {
        rates = _rates;
    }

    else {
        std::cout << "Invalid rating. Setting to 0." << std::endl;
        rates = 0;
    }
}

Attribute::~Attribute(){}
