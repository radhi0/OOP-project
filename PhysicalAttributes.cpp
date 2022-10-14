#include "PhysicalAttributes.h"

PhysicalAttributes::PhysicalAttributes(Attribute _stamina, Attribute _pace, Attribute _physical, Attribute _height) : 
stamina(_stamina), pace(_pace), physical(_physical), height(_height) {}

PhysicalAttributes::PhysicalAttributes(){
    stamina.set_rates(0);
    pace.set_rates(0);
    physical.set_rates(0);
    height.set_rates(0);
}

void PhysicalAttributes::set_stamina(Attribute _stamina){stamina = _stamina;}
        
void PhysicalAttributes::set_pace(Attribute _pace){pace = _pace;}

void PhysicalAttributes::set_physical(Attribute _physical){physical = _physical;}

void PhysicalAttributes::set_height(Attribute _height){height = _height;}
        
Attribute PhysicalAttributes::get_stamina(){return stamina;}
        
Attribute PhysicalAttributes::get_pace(){return pace;}

Attribute PhysicalAttributes::get_physical(){return physical;}

Attribute PhysicalAttributes::get_height(){return height;}

int PhysicalAttributes:: total_physicalAttributes_rates() {
    return stamina.get_rates() + pace.get_rates() + physical.get_rates() + height.get_rates();
}

PhysicalAttributes::~PhysicalAttributes(){}