#ifndef Attribute_h
#define Attribute_h

// This class represents an attribute rating
class Attribute {
    private:
        int rate;
    public:
        Attribute();
        Attribute(int _rate);
        int get_rate();
        void set_rate(int _rate);
        ~Attribute();
};

#endif
