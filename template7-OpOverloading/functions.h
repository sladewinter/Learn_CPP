//Forward declarations of functions defined in functions.cpp

//Overloading the * operator to multiply 2 fractions
Fraction operator*(const Fraction &f1, const Fraction &f2);

//Overloading the * operator to multiply a fraction and an integer
Fraction operator*(const Fraction &f1, int value);
Fraction operator*(int value, const Fraction &f1);

//Overloading << operator to take input a fraction
std::ostream& operator<< (std::ostream &out, const Fraction &f);

//Overloading >> operator to output a fraction
std::istream& operator>> (std::istream &in, Fraction &fraction);
