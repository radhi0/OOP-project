#ifndef PowerForward_h
#define PowerForward_h


#include "Attribute.h"
#include "Player.h"

class PowerForward : public Player {
 private:
  Attribute Shooting;
  Attribute Accuracy;
  Attribute freeThrows;

 public:
  PowerForward();
  PowerForward(string _name, PhysicalAttributes _physicalAttributes_rates,
               CommonSkills _commonSkills_rates, float _salary,
               Attribute _Shooting, Attribute _Accuracy, Attribute _freeThrows);
 //setter
  void set_shooting(Attribute _Shooting);
  void set_accuracy(Attribute _Accuracy);
  void set_freeThrows(Attribute _freeThrows);
  //getter
  Attribute get_shooting();
  Attribute get_accuracy();
  Attribute get_freeThrows();
  void printing_info();
  float totalPlayer_rates();
  ~PowerForward();
};

#endif
