#include "CommonSkills.h"

CommonSkills::CommonSkills(){
    /*passing.set_rating(0);
    ball_control.set_rating(0);
    dribbling.set_rating(0);*/
}

CommonSkills::CommonSkills(Attribute _pass, Attribute _ball_ctrl, Attribute _dribble, Attribute _shoot){
    pass = _pass;
    ball_ctrl = _ball_ctrl;
    dribble = _dribble;
}

Attribute CommonSkills::get_pass(){return pass;}
        
Attribute CommonSkills::get_ball_ctrl(){return ball_ctrl;}

Attribute CommonSkills::get_dribble(){return dribble;}

void CommonSkills::set_passing(Attribute _pass){pass = _pass;}

void CommonSkills::set_ball_ctrl(Attribute _ball_ctrl){ball_ctrl = _ball_ctrl;}

void CommonSkills::set_dribble(Attribute _dribble){dribble = _dribble;}


int CommonSkills::total_skill_rating(){
     return pass.get_rate() + ball_ctrl.get_rate() + dribble.get_rate(); 
}

CommonSkills::~CommonSkills(){}