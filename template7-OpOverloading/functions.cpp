#include <iostream>
#include <limits>     //for std::numeric_limits
#include "classes.h"
#include "functions.h"

//Overloading the * operator to multiply 2 fractions
Fraction operator*(const Fraction &f1, const Fraction &f2)
{
  return Fraction(f1.m_numerator * f2.m_numerator, f1.m_denominator * f2.m_denominator);
}

//Overloading the * operator to multiply a fraction and an integer
Fraction operator*(const Fraction &f1, int value)
{
  return Fraction(f1.m_numerator * value, f1.m_denominator);
}

Fraction operator*(int value, const Fraction &f1)
{
  return Fraction(f1.m_numerator * value, f1.m_denominator);
}

//Overloading << operator to take input a fraction
std::ostream& operator<< (std::ostream &out, const Fraction &f)
{
  // Since operator<< is a friend of the Fraction class, we can access Fraction's members directly.
  out <<  f.m_numerator << '/' << f.m_denominator;
  return out;
}

//Overloading >> operator to output a fraction
std::istream& operator>> (std::istream &in, Fraction &fraction)
{
  // Since operator>> is a friend of the Fraction class, we can access Fraction's members directly.
  // note that parameter fraction must be non-const so we can modify the class members with the input

  in >> fraction.m_numerator;                                     // Overwrite the values of fraction
	in.ignore(std::numeric_limits<std::streamsize>::max(), '/');  // Ignore the '/' separator
  in >> fraction.m_denominator;
  fraction.reduce();                                         // We need to reduce the fraction again

  return in;
}
