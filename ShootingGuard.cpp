#include "ShootingGuard.h"
#include <iostream>

using namespace std;

ShootingGuard::ShootingGuard(){}

ShootingGuard::ShootingGuard(string _name, PhysicalAttributes _physicalAttributes_rates, 
    CommonSkills _commonSkills_rates, float _salary, Attribute _Shooting, Attribute _Accuracy, Attribute _freeThrows){
        name = _name;
        physicalAttributes_rates = _physicalAttributes_rates;
        commonSkills_rates = _commonSkills_rates;
        requiredSalary_for_player = _salary;
        Shooting = _Shooting;
        Accuracy = _Accuracy;
        freeThrows = _freeThrows;
}
    
void ShootingGuard::set_shooting(Attribute _Shooting){Shooting = _Shooting;}

void ShootingGuard::set_accuracy(Attribute _Accuracy){Accuracy = _Accuracy;}

void ShootingGuard::set_freeThrows(Attribute _freeThrows){freeThrows = _freeThrows;}

Attribute ShootingGuard::get_shooting(){return Shooting;}

Attribute ShootingGuard::get_accuracy(){return Accuracy;}

Attribute ShootingGuard::get_freeThrows(){return freeThrows;}

void ShootingGuard::printing_info() {
    Player::printing_info();
    cout << "Shooting: " << Shooting.get_rates() << " ";
    cout << "|| Accuracy: " << Accuracy.get_rates() << " ";
    cout << "|| Free Throws: " << freeThrows.get_rates() << endl;
}

float ShootingGuard::totalPlayer_rates() {
    return (Player::totalPlayer_rates() + (float(Shooting.get_rates()) + float(Accuracy.get_rates()) + float(freeThrows.get_rates()))/3)/2;
}

ShootingGuard::~ShootingGuard(){}