#ifndef PhysicalAttributes_h
#define PhysicalAttributes_h

#include "Attribute.h"

// an agrregation of physical attritubtes which are common to all type of players

class PhysicalAttributes {
    private:
        Attribute stamina;
        Attribute pace;
        Attribute physical;
        Attribute height;   
           
    
    public:
        PhysicalAttributes();
        PhysicalAttributes(Attribute _stamina, Attribute _pace, Attribute _physical, Attribute _height);
        void set_stamina(Attribute _stamina);
        void set_pace(Attribute _pace);
        void set_physical(Attribute _physical);
        void set_height(Attribute _height);
        Attribute get_stamina();
        Attribute get_pace();
        Attribute get_physical();
        Attribute get_height();
        int total_physicalAttributes_rates();
        ~PhysicalAttributes();
};


#endif
