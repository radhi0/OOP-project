#ifndef UltimateTeam_h
#define UltimateTeam_h

#include <iostream>
#include <string>
#include "Player.h"
#include "PointGuard.h"
#include "SmallForward.h"
#include "PowerForward.h"
#include "ShootingGuard.h"


using namespace std;

class UltimateTeam {
    private: 
        string NBA_teamName;
        PointGuard pointguard;
        ShootingGuard shootingguard;
        SmallForward smallforward;
        PowerForward powerforward;
        float requiredTeam_salary;

    public:
        UltimateTeam();
        string get_teamName();
        void set_teamName(string _new_teamName);
        void reset_teamMembers();
        PointGuard get_teamPointguard();
        ShootingGuard get_teamShootingguard();
        SmallForward get_teamSmallforward();
        PowerForward get_teamPowerforward();
        void set_teamMembers(PointGuard team_pointg, ShootingGuard team_shootingg, SmallForward team_smallf, PowerForward team_powerf);
        void print_playerNames();
        ~UltimateTeam();
};

#endif