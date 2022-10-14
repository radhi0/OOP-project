#include "PowerForward.h"
#include "Player.h"
#include <iostream>

using namespace std;
PowerForward::PowerForward(){}

PowerForward::PowerForward(string _name, PhysicalAttributes _physicalAttributes_rates, 
    CommonSkills _commonSkills_rates, float _salary, Attribute _Shooting, Attribute _Accuracy, Attribute _freeThrows){
        name = _name;
        physicalAttributes_rates = _physicalAttributes_rates;
        commonSkills_rates = _commonSkills_rates;
        requiredSalary_for_player = _salary;
        Shooting = _Shooting;
        Accuracy = _Accuracy;
        freeThrows = _freeThrows;
}

void PowerForward::set_shooting(Attribute _Shooting){Shooting = _Shooting;}

void PowerForward::set_accuracy(Attribute _Accuracy){Accuracy = _Accuracy;}

void PowerForward::set_freeThrows(Attribute _freeThrows){freeThrows = _freeThrows;}

Attribute PowerForward::get_shooting(){return Shooting;}

Attribute PowerForward::get_accuracy(){return Accuracy;}

Attribute PowerForward::get_freeThrows(){return freeThrows;}

void PowerForward::printing_info() {
    Player::printing_info();
    cout << "Shooting: " << Shooting.get_rates() << " ";
    cout << "|| Accuracy: " << Accuracy.get_rates() << " ";
    cout << "|| Free Throws: " << freeThrows.get_rates() << endl;
}

float PowerForward::totalPlayer_rates() {
    return (Player::totalPlayer_rates() + (float(Shooting.get_rates()) + float(Accuracy.get_rates()) + float(freeThrows.get_rates()))/3)/2;
}

PowerForward::~PowerForward(){}