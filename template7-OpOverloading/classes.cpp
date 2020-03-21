//Definitions of member functions of class Fraction

#include <iostream>
#include "classes.h"

int Fraction::gcd(int a, int b)
{
  return b == 0 ? a : gcd(b, a % b);
}

void Fraction::reduce()
{
  if (m_numerator != 0 && m_denominator != 0)
  {
    int gcd = Fraction::gcd(m_numerator, m_denominator);
    m_numerator /= gcd;
    m_denominator /= gcd;
  }
}

void Fraction::print()
{
  std::cout << m_numerator << "/" << m_denominator << "\n";
}
