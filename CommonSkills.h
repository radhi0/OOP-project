#ifndef CommonSkills_h
#define CommonSkills_h

#include "Attribute.h"

// Aggreation of basketball skills common to all type of players

class CommonSkills {
    private:
        Attribute pass;
        Attribute ball_ctrl;
        Attribute dribble;
        Attribute shoot;
    
    public:
        CommonSkills();
        CommonSkills(Attribute _pass, Attribute _ball_ctrl, Attribute _dribble, Attribute _shoot);
        //getters
        Attribute get_pass();
        Attribute get_ball_ctrl();
        Attribute get_dribble();
        Attribute get_shoot();
        //getters
        void set_pass(Attribute _pass);
        void set_ball_ctrl(Attribute _ball_ctrl);
        void set_dribble(Attribute _dribble);
        void set_shoot(Attribute _shoot);
        int totalSkills_rates();
        ~CommonSkills();
};

#endif
