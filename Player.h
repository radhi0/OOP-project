#ifndef Player_h
#define Player_h

#include "PhysicalAttributes.h"
#include "CommonSkills.h"
#include <string>

using namespace std;

class Player {
protected:
    string name;
    PhysicalAttributes::PhysicalAttributes() physicalAttributes_rates;
    CommonSkills commonSkills_rates;
    float requiredSalary_for_player;
    float printSalary_of_selected_player;
    
public:
    Player();
    Player(string _name, PhysicalAttributes _physicalAttributes_rates, CommonSkills _commonSkill_rates, float salary);
    void set_name(string _name);
    void set_physicalAttribute_rates(PhysicalAttributes _physicalAttribute_rates);
    void set_commonSkills_rates(CommonSkills _common_skill_rates);
    void set_requiredSalary_for_player(float _required_player_salary);
    string get_name();
    PhysicalAttributes get_physicalAttributes_rates();
    CommonSkills get_commonSkill_rates();
    float get_requiredSalary_for_players() const;
    virtual void printing_info();
    virtual float total_player_rates() = 0;
    ~Player();
};

#endif