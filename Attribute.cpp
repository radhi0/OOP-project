#include "Attribute.h"
#include <iostream>



Attribute::Attribute() : rate(0){}

Attribute::Attribute(int _rate){
    if (_rate >= 0 && _rate <= 10) {
        rate = _rate;
    }

    else {
        std::cout << "Invalid rating. Setting to 0." << std::endl;
        rate = 0;
    }
}

int Attribute::get_rate(){
    return rate;
    }

void Attribute::set_rate(int _rate){
    if (_rate >= 0 && _rate <= 10) {
        rate = _rate;
    }

    else {
        std::cout << "Invalid rating. Setting to 0." << std::endl;
        rate = 0;
    }
}

Attribute::~Attribute(){}