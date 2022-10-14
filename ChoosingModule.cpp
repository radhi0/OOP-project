#include<iostream>
#include<string>
#include<fstream>
#include "ChoosingModule.h"

using namespace std;

ChoosingModule::ChoosingModule(){
    pg_selection = new PointGuard[17];
    sf_selection = new SmallForward[17]; 
    pf_selection = new PowerForward[17];
    sg_selection = new ShootingGuard[17]; 
}

void ChoosingModule::take_in_pointguard(string filename){
    ifstream S_File(filename);
    
    string name;
    
    Attribute stamina;
    Attribute pace;
    Attribute physical;
    Attribute height; 
    Attribute pass;
    Attribute ball_ctrl;
    Attribute dribble;
    Attribute shoot;

    PhysicalAttributes physicalSkills;
    CommonSkills technicalSkills;
    
    int shooting_rates;
    int accuracy_rates;
    int freethrows_rates;
    int pace_rates;
    int physical_rates;
    int stamina_rates;
    int height_rates;
    int ball_ctrl_rates;
    int pass_rates;
    int dribble_rates;
    int shoot_rates;
    int cost;
    
     for (int i = 0; i < 8; i++){
        S_File >> name >> shooting_rates >> accuracy_rates >> freethrows_rates >> pace_rates >> physical_rates >> stamina_rates >> height_rates
        >> ball_ctrl_rates >> pass_rates >> dribble_rates >> shoot_rates >> cost;
        
        pg_selection[i].set_name(name);
        pg_selection[i].set_requiredSalary_for_player(cost);

        pg_selection[i].set_shooting(shooting_rates);
        pg_selection[i].set_accuracy(accuracy_rates);
        pg_selection[i].set_freeThrows(freethrows_rates);

        pace.set_rates(pace_rates);
        physical.set_rates(physical_rates);
        stamina.set_rates(stamina_rates);
        height.set_rates(height_rates);

        physicalSkills.set_pace(pace);
        physicalSkills.set_physical(physical);
        physicalSkills.set_stamina(stamina);
        physicalSkills.set_height(height);

        pg_selection[i].set_physicalAttribute_rates(physicalSkills);
    
        pass.set_rates(pass_rates);
        dribble.set_rates(dribble_rates);
        ball_ctrl.set_rates(ball_ctrl_rates);

        technicalSkills.set_ball_ctrl(ball_ctrl);
        technicalSkills.set_dribble(dribble);
        technicalSkills.set_pass(pass);
        technicalSkills.set_shoot(shoot);

        pg_selection[i].set_commonSkills_rates(technicalSkills);
    }
}

void ChoosingModule::take_in_shootingguard(string filename){
    ifstream M_File(filename);
    
    string name;

    Attribute stamina;
    Attribute pace;
    Attribute physical;
    Attribute height; 
    Attribute pass;
    Attribute ball_ctrl;
    Attribute dribble;
    Attribute shoot;

    PhysicalAttributes physicalSkills;
    CommonSkills technicalSkills;
    
    int shooting_rates;
    int accuracy_rates;
    int freethrows_rates;
    int pace_rates;
    int physical_rates;
    int stamina_rates;
    int height_rates;
    int ball_ctrl_rates;
    int pass_rates;
    int dribble_rates;
    int shoot_rates;
    int cost;

for (int i = 0; i < 8; i++){
        M_File >> name >> shooting_rates >> accuracy_rates >> freethrows_rates >> pace_rates >> physical_rates >> stamina_rates >> height_rates
        >> ball_ctrl_rates >> pass_rates >> dribble_rates >> shoot_rates >> cost;
        
        sg_selection[i].set_name(name);
        sg_selection[i].set_requiredSalary_for_player(cost);

        sg_selection[i].set_shooting(shooting_rates);
        sg_selection[i].set_accuracy(accuracy_rates);
        sg_selection[i].set_freeThrows(freethrows_rates);

        pace.set_rates(pace_rates);
        physical.set_rates(physical_rates);
        stamina.set_rates(stamina_rates);
        height.set_rates(height_rates);

        physicalSkills.set_pace(pace);
        physicalSkills.set_physical(physical);
        physicalSkills.set_stamina(stamina);
        physicalSkills.set_height(height);

        sg_selection[i].set_physicalAttribute_rates(physicalSkills);
    
        pass.set_rates(pass_rates);
        dribble.set_rates(dribble_rates);
        ball_ctrl.set_rates(ball_ctrl_rates);

        technicalSkills.set_ball_ctrl(ball_ctrl);
        technicalSkills.set_dribble(dribble);
        technicalSkills.set_pass(pass);
        technicalSkills.set_shoot(shoot);

        sg_selection[i].set_commonSkills_rates(technicalSkills);
    }
}

void ChoosingModule::take_in_smallforward(string filename){
    ifstream D_File(filename);
    
    string name;

    Attribute stamina;
    Attribute pace;
    Attribute physical;
    Attribute height; 
    Attribute pass;
    Attribute ball_ctrl;
    Attribute dribble;
    Attribute shoot;

    PhysicalAttributes physicalSkills;
    CommonSkills technicalSkills;
    
    int shooting_rates;
    int accuracy_rates;
    int freethrows_rates;
    int pace_rates;
    int physical_rates;
    int stamina_rates;
    int height_rates;
    int ball_ctrl_rates;
    int pass_rates;
    int dribble_rates;
    int shoot_rates;
    int cost;

for (int i = 0; i < 8; i++){
        D_File >> name >> shooting_rates >> accuracy_rates >> freethrows_rates >> pace_rates >> physical_rates >> stamina_rates >> height_rates
        >> ball_ctrl_rates >> pass_rates >> dribble_rates >> shoot_rates >> cost;
        
        sf_selection[i].set_name(name);
        sf_selection[i].set_requiredSalary_for_player(cost);

        sf_selection[i].set_shooting(shooting_rates);
        sf_selection[i].set_accuracy(accuracy_rates);
        sf_selection[i].set_freeThrows(freethrows_rates);

        pace.set_rates(pace_rates);
        physical.set_rates(physical_rates);
        stamina.set_rates(stamina_rates);
        height.set_rates(height_rates);

        physicalSkills.set_pace(pace);
        physicalSkills.set_physical(physical);
        physicalSkills.set_stamina(stamina);
        physicalSkills.set_height(height);

        sf_selection[i].set_physicalAttribute_rates(physicalSkills);
    
        pass.set_rates(pass_rates);
        dribble.set_rates(dribble_rates);
        ball_ctrl.set_rates(ball_ctrl_rates);

        technicalSkills.set_ball_ctrl(ball_ctrl);
        technicalSkills.set_dribble(dribble);
        technicalSkills.set_pass(pass);
        technicalSkills.set_shoot(shoot);

        sf_selection[i].set_commonSkills_rates(technicalSkills);
    }
}

void ChoosingModule::take_in_powerforward(string filename){
    ifstream G_File(filename);
    
    string name;

    Attribute stamina;
    Attribute pace;
    Attribute physical;
    Attribute height; 
    Attribute pass;
    Attribute ball_ctrl;
    Attribute dribble;
    Attribute shoot;

    PhysicalAttributes physicalSkills;
    CommonSkills technicalSkills;
    
    int shooting_rates;
    int accuracy_rates;
    int freethrows_rates;
    int pace_rates;
    int physical_rates;
    int stamina_rates;
    int height_rates;
    int ball_ctrl_rates;
    int pass_rates;
    int dribble_rates;
    int shoot_rates;
    int cost;

for (int i = 0; i < 8; i++){
        G_File >> name >> shooting_rates >> accuracy_rates >> freethrows_rates >> pace_rates >> physical_rates >> stamina_rates >> height_rates
        >> ball_ctrl_rates >> pass_rates >> dribble_rates >> shoot_rates >> cost;
        
        pf_selection[i].set_name(name);
        pf_selection[i].set_requiredSalary_for_player(cost);

        pf_selection[i].set_shooting(shooting_rates);
        pf_selection[i].set_accuracy(accuracy_rates);
        pf_selection[i].set_freeThrows(freethrows_rates);

        pace.set_rates(pace_rates);
        physical.set_rates(physical_rates);
        stamina.set_rates(stamina_rates);
        height.set_rates(height_rates);

        physicalSkills.set_pace(pace);
        physicalSkills.set_physical(physical);
        physicalSkills.set_stamina(stamina);
        physicalSkills.set_height(height);

        pf_selection[i].set_physicalAttribute_rates(physicalSkills);
    
        pass.set_rates(pass_rates);
        dribble.set_rates(dribble_rates);
        ball_ctrl.set_rates(ball_ctrl_rates);

        technicalSkills.set_ball_ctrl(ball_ctrl);
        technicalSkills.set_dribble(dribble);
        technicalSkills.set_pass(pass);
        technicalSkills.set_shoot(shoot);

        pf_selection[i].set_commonSkills_rates(technicalSkills);
    }
}

void ChoosingModule::printing_possiblePlayers(const string position){
    if (position == "PointGuard"){
        for (int i = 0; i < 8; i++){
            pg_selection[i].printing_info();
        }
    }else if(position == "ShootingGuard"){
        for (int i = 0; i < 8; i++){
            sg_selection[i].printing_info();
        }
    }else if(position == "SmallForward"){
        for (int i = 0; i < 8; i++){
            sf_selection[i].printing_info();
        }
    }else{
        for (int i = 0; i < 8; i++){
            pf_selection[i].printing_info();
        }
    }
}

PointGuard ChoosingModule::selecting_pg(string name){
    for (int i = 0; i < 8; i++){
        if (pg_selection[i].get_name() == name){
            return pg_selection[i];
        }
    }
}

ShootingGuard ChoosingModule::selecting_sg(string name){
    for (int i = 0; i < 8; i++){
        if (sg_selection[i].get_name() == name){
            return sg_selection[i];
        }
    }    
}

SmallForward ChoosingModule::selecting_sf(string name){
    for (int i = 0; i < 8; i++){
        if (sf_selection[i].get_name() == name){
            return sf_selection[i];
        }
    }    
}

PowerForward ChoosingModule::selecting_pf(string name){
    for (int i = 0; i < 8; i++){
        if (pf_selection[i].get_name() == name){
            return pf_selection[i];
        }
    }    
}

PointGuard* ChoosingModule::get_pg_selections() {return pg_selection;}
SmallForward* ChoosingModule::get_sf_selections(){return sf_selection;}
PowerForward* ChoosingModule::get_pf_selections(){return pf_selection;}
ShootingGuard*ChoosingModule:: get_sg_selections(){return sg_selection;}


ChoosingModule::~ChoosingModule(){
}