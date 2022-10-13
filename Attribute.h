#ifndef Attribute_h
#define Attribute_h

// This class represents an attribute rating
class Attribute {
    private:
        int rates;
    public:
        Attribute();
        Attribute(int _rates);
        int get_rates();
        void set_rates(int _rates);
        ~Attribute();
};

#endif
