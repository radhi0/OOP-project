#include "Attribute.h"
#include <iostream>



Attribute::Attribute() : rates(0){}

Attribute::Attribute(int _rates){
    if (_rates >= 0 && _rates <= 10) {
        rates = _rates;
    }

    else {
        std::cout << "Invalid rating. Setting to 0." << std::endl;
        rates = 0;
    }
}

int Attribute::get_rates(){
    return rates;
    }

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
