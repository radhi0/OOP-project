#include "Player.h"
#include <iostream>

using namespace std;

Player::Player() {
    name = "";
    requiredSalary_for_player = 0;
}

Player::Player(string _name, PhysicalAttributes _physicalAttributes_rates, CommonSkills _commonSkills_rates, float _salary){
    name = _name;
    physicalAttributes_rates = _physicalAttributes_rates;
    commonSkills_rates = _commonSkills_rates;
    requiredSalary_for_player = _salary;
    printSalary_of_selected_player = requiredSalary_for_player;
}
//setters
void Player::set_name(string _name){name = _name;}
    
void Player::set_physicalAttribute_rates(PhysicalAttributes _physicalAttributes_rates){physicalAttributes_rates = _physicalAttributes_rates;}
    
void Player::set_commonSkills_rates(CommonSkills _commonSkill_rates){commonSkills_rates = _commonSkill_rates;}
    
void Player::set_requiredSalary_for_player(float _requiredSalary_for_player){requiredSalary_for_player = _requiredSalary_for_player;}

void Player::set_printSalary_of_selected_player(float _printSalary_of_selected_player){printSalary_of_selected_player = _printSalary_of_selected_player;}

//getters

string Player::get_name(){return name;}
    
PhysicalAttributes Player::get_physicalAttributes_rates(){return physicalAttributes_rates;}
    
CommonSkills Player::get_commonSkill_rates(){return commonSkills_rates;}
    
float Player::get_requiredSalary_for_players() const {return requiredSalary_for_player;}

float Player::get_printSalary_of_selected_player() const {return printSalary_of_selected_player;}

void Player::printing_info() {
    cout << "Name: " << name << endl;
    cout << "Salary: " << requiredSalary_for_player << endl;
    cout << "Stamina: " << physicalAttributes_rates.get_stamina().get_rates() << " ";
    cout << "|| Pace: " << physicalAttributes_rates.get_pace().get_rates() << " ";
    cout << "|| Physical: " << physicalAttributes_rates.get_physical().get_rates() << " ";
    cout << "|| Height: " << physicalAttributes_rates.get_height().get_rates() << endl;
    cout << "Passing: " << commonSkills_rates.get_pass().get_rates() << " ";
    cout << "|| Ball Control: " << commonSkills_rates.get_ball_ctrl().get_rates() << " ";
    cout << "|| Dribbling: " << commonSkills_rates.get_dribble().get_rates() << endl;
    cout << "|| Shooting: " << commonSkills_rates.get_shoot().get_rates()<< endl;
}

float Player::totalPlayer_rates() {
    return (float(physicalAttributes_rates.total_physicalAttributes_rates()) + float(commonSkills_rates.totalSkills_rates()))/7;
}

Player::~Player(){}
