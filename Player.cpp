#include "Player.h"
#include <iostream>

using namespace std;

Player::Player() {
    name = "";
    required_player_salary = 0;
}

Player::Player(string _name, PhysicalAttributes _physicalAttributes_rates, CommonSkills _commonSkills_rates, float _salary){
    name = _name;
    physicalAttributes_rates = _physicalAttributes_rates;
    commonSkill_rates = _commonSkill_rates;
    requiredSalary_for_player = _salary;
    printSalary_of_selected_player; = requiredSalary_for_player;
}

void Player::set_name(string _name){name = _name;}
    
void Player::set_physicalAttribute_rates(PhysicalAttributes _physicalAttributes_rates){physicalAttributes_rates = _physicalAttributes_rates;}
    
void Player::set_commonSkills_rates(CommonSkills _commonSkill_rates){commonSkills_rates = _commonSkill_rates;}
    
void Player::set_requiredSalary_for_player(float _requiredSalary_for_player){requiredSalary_for_player = _requiredSalary_for_player;}

void Player::set_printSalary_of_selected_player(float printSalary_of_selected_player){printSalary_of_selected_player = _pprintSalary_of_selected_player;}
    
string Player::get_name(){return name;}
    
PhysicalAttributes Player::get_physicalAttribute_rates(){return physicalAttribute_rates;}
    
CommonSkills Player::get_commonSkill_rates(){return commonSkills_rates;}
    
float Player::get_requiredSalary_for_players() const {return requiredSalary_for_player;}

float Player::get_printSalary_of_slected() {return printSalary_of_selected_player;}

void Player::printing_info() {
    cout << "Name: " << name << endl;
    cout << "Salary: " << requiredSalary_for_player << endl;
    cout << "Stamina: " << physicalAttribute_rates.get_stamina().get_rates() << " ";
    cout << "|| Pace: " << physicalAttribute_rates.get_pace().get_rates() << " ";
    cout << "|| Physical: " << physicalAttribute_rates.get_physical().get_rates() << " ";
    cout << "|| Height: " << physicalAttribute_rates.get_height().get_rates() << endl;
    cout << "Passing: " << commonSkills_rates.get_pass().get_rates() << " ";
    cout << "|| Ball Control: " << commonSkills_rates.get_ball_ctrl().get_rates() << " ";
    cout << "|| Dribbling: " << commonSkills_rates.get_dribble().get_rates() << endl;
    cout << "|| Shooting: " << commonSkills_rates.get_shoot().get_rates()<< endl;
}

float Player::total_player_rating() {
    return (float(physicalAttributes_rates.total_physicalAttributes_rates()) + float(commonSkills_rates.totalSkills_rates()))/7;
}

Player::~Player(){}