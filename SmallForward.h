#ifndef SmallForward_h
#define PSmallForward_h


#include "Attribute.h"
#include "Player.h"

class SmallForward : public Player {
 private:
  Attribute Shooting;
  Attribute Accuracy;
  Attribute freeThrows;

 public:
  SmallForward();
  SmallForward(string _name, PhysicalAttributes _physicalAttributes_rates,
               CommonSkills _commonSkills_rates, float _salary,
               Attribute _Shooting, Attribute _Accuracy, Attribute _freeThrows);
  //setter
  void set_shooting(Attribute _Shooting);
  void set_accuracy(Attribute _Accuracy);
  void set_freeThrows(Attribute _freeThrows);
  Attribute get_shooting();
  Attribute get_accuracy();
  Attribute get_freeThrows();
  void printing_info();
  float totalPlayer_rates();
  ~SmallForward();
};

#endif
