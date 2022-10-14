#ifndef ChoosingModule_h
#define ChoosingModule_h

#include <iostream>
#include <string>

#include "Player.h"
#include "PointGuard.h"
#include "PowerForward.h"
#include "ShootingGuard.h"
#include "SmallForward.h"
#include "UltimateTeam.h"

using namespace std;

class ChoosingModule {
 private:
  PointGuard* pg_selection;
  SmallForward* sf_selection;
  PowerForward* pf_selection;
  ShootingGuard* sg_selection;
  UltimateTeam* team_byUser;

 public:
  ChoosingModule();
  void take_in_pointguard(string filename);
  void take_in_smallforward(string filename);
  void take_in_powerforward(string filename);
  void take_in_shootingguard(string filename);
  PointGuard* get_pg_selections();
  SmallForward* get_sf_selections();
  PowerForward* get_pf_selections();
  ShootingGuard* get_sg_selections();
  void printing_possiblePlayers(const string position);
  PointGuard selecting_pg(string name);
  SmallForward selecting_sf(string name);
  PowerForward selecting_pf(string name);
  ShootingGuard selecting_sg(string name);
  ~ChoosingModule();
};
#endif
