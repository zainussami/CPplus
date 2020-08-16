#include <iostream>

class Fraction {
public:
    Fraction(int top, int bottom) {
        /** Fraction contructor method */
        num = top;     // setting num's value
        den = bottom;  // setting den's value
    }
    void show(){
        std::cout << num << "/" << den << std::endl;
    }
    Fraction operator +(const Fraction &otherFrac) {
        int newnum = otherFrac.num*den + otherFrac.den*num;
        int newden = den*otherFrac.den;
        return Fraction(newnum, newden);
    }
    friend std::ostream &operator << (std::ostream &stream, const Fraction &frac);
private:
    int num; // num atribute
    int den; // den attribute
};

std::ostream &operator << (std::ostream &stream, const Fraction &frac) {
    /** this is the definition. */
    stream << frac.num << "/" << frac.den;
    return stream;
}


int main() {
    Fraction myfraction(3, 5);
    myfraction.show();
    std::cout << myfraction;
    std::cout << "Hello, World!" << std::endl;
    Fraction f1(1, 4);
    Fraction f2(1, 2);
    Fraction f3 = f1 + f2;
    std::cout << f3 << " is "<< f1 << " + " << f2 << std::endl;
    return 0;
}