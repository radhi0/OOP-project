#ifndef Attribute_h
#define Attribute_h

// This class represents an attribute rating
class Attribute {
    private:
        int rates;
    public:
    // constructors
        Attribute();
        Attribute(int _rates);
    // getters
        int get_rates();
    //setters
        void set_rates(int _rates);
        ~Attribute();
};

#endif
