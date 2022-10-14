#include "UltimateTeam.h"
#include <iostream>

using namespace std;

UltimateTeam::UltimateTeam() {
    NBA_teamName = "";
    requiredTeam_salary = 0;
}

string UltimateTeam::get_teamName() {
    return NBA_teamName;
}

void UltimateTeam::reset_teamMembers(){
    pointguard.set_name("");
    shootingguard.set_name("");
    smallforward.set_name("");
    powerforward.set_name("");
}

void UltimateTeam::set_teamName(string new_teamName){
    NBA_teamName = new_teamName;
}

PointGuard UltimateTeam::get_teamPointguard(){return pointguard;}

ShootingGuard UltimateTeam::get_teamShootingguard(){return shootingguard;}

SmallForward UltimateTeam::get_teamSmallforward(){return smallforward;}

PowerForward UltimateTeam::get_teamPowerforward(){return powerforward;}

void UltimateTeam::set_teamMembers(PointGuard _team_pointg, ShootingGuard _team_shootingg, SmallForward _team_smallf, PowerForward _team_powerf){
    pointguard = _team_pointg;
    shootingguard = _team_shootingg;
    smallforward = _team_smallf;
    powerforward = _team_powerf;
}

void UltimateTeam::print_playerNames(){
    cout << pointguard.get_name() << endl;
    cout << shootingguard.get_name() << endl;
    cout << smallforward.get_name() << endl;
    cout << powerforward.get_name() << endl;
}

UltimateTeam::~UltimateTeam(){}