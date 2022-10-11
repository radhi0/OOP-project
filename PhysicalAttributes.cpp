#include "PhysicalAttributes.h"

PhysicalAttribute::PhysicalAttribute(Attribute _stamina, Attribute _pace, Attribute _physical, Attribute _height) : 
stamina(_stamina), pace(_pace), physical(_physical), height(_height) {}

PhysicalAttribute::PhysicalAttribute(){
    stamina.set_rate(0);
    pace.set_rate(0);
    physical.set_rate(0);
    height.set_rate(0);
}

void PhysicalAttribute::set_stamina(Attribute _stamina){stamina = _stamina;}
        
void PhysicalAttribute::set_pace(Attribute _pace){pace = _pace;}

void PhysicalAttribute::set_physical(Attribute _physical){physical = _physical;}

void PhysicalAttribute::set_height(Attribute _height){height = _height;}
        
Attribute PhysicalAttribute::get_stamina(){return stamina;}
        
Attribute PhysicalAttribute::get_pace(){return pace;}

Attribute PhysicalAttribute::get_physical(){return physical;}

Attribute PhysicalAttribute::get_height(){return height;}

int PhysicalAttribute:: total_physical_attribute_rate() {
    return stamina.get_rate() + pace.get_rate() + physical.get_rate() + height.get_rate();
}

PhysicalAttribute::~PhysicalAttribute(){}