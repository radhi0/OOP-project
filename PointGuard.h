#ifndef PointGuard_h
#define PointGuard_h

#include "Attribute.h"
#include "Player.h"

class PointGuard: public Player {
private:
    Attribute Shooting;
    Attribute Accuracy;
    Attribute freeThrows;
public:
    PointGuard();
    PointGuard(string _name, PhysicalAttributes _physicalAttributes_rates, 
    CommonSkills _commonSkills_rates, float _salary, Attribute Shooting, Attribute Accuracy, Attribute freeThrows);
    //setters
    void set_shooting(Attribute _Shooting);
    void set_accuracy(Attribute _Accuracy);
    void set_freeThrows(Attribute _freeThrows);
    //getters
    Attribute get_shooting();
    Attribute get_accuracy();
    Attribute get_freeThrows();
    void printing_info();
    float totalPlayer_rates();
    ~PointGuard();
};

#endif
