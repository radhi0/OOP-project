#ifndef PlayerForward_h
#define PlayerForward_h

#include "Attribute.h"
#include "Player.h"

class PlayerForward: public Player {
private:
    Attribute Shooting;
    Attribute Accuracy;
    Attribute FreeThrows;
public:
    PlayerForward();
    PlayerForward(string name, PhysicalAttributes _physicalAttribute_rates, 
    CommonSkills _commonSkill_rates, float _salary, Attribute _Shooting, Attribute _Accuracy, Attribute _FreeThrows);
    void set_shooting(Attribute  Shooting);
    void set_accuracy (Attribute Accurracy);
    void set_Free(Attribute FreeThrows);
    Attribute get_shooting();
    Attribute get_accuracy();
    Attribute get_freeThrows();
    void printing_info();
    float total_player_rates();
    ~PlayerForward();
};

#endif