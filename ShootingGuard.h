#ifndef ShootingGuard_h
#define ShootingGuard_h

#include "Player.h"
#include "Attribute.h"

class ShootingGuard: public Player {
private:
    Attribute Shooting;
    Attribute Accuracy;
    Attribute freeThrows;
public:
    ShootingGuard();
    ShootingGuard(string _name, PhysicalAttributes _physicalAttributes_rates, 
    CommonSkills _commonSkills_rates, float _salary, Attribute Shooting, Attribute Accuracy, Attribute freeThrows);
    void set_shooting(Attribute _Shooting);
    void set_accuracy(Attribute _Accuracy);
    void set_freeThrows(Attribute _freeThrows);
    Attribute get_shooting();
    Attribute get_accuracy();
    Attribute get_freeThrows();
    void printing_info();
    float totalPlayer_rates();
    ~ShootingGuard();
};

#endif