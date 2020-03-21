class Fraction
{
	int m_numerator{};
	int m_denominator{};

public:
	Fraction(int numerator=0, int denominator=1):
		m_numerator(numerator), m_denominator(denominator)
	{
		// We put reduce() in the constructor to ensure any new fractions we make get reduced!
		// Any fractions that are overwritten will need to be re-reduced
		reduce();
	}

	// We'll make gcd static so that it can be part of class Fraction without requiring an
  //object of type Fraction to use
	int gcd(int a, int b);
	void reduce();
  void print();

  //Declare all operator funtions as friends so that they can access private data
	friend Fraction operator*(const Fraction &f1, const Fraction &f2);
	friend Fraction operator*(const Fraction &f1, int value);
	friend Fraction operator*(int value, const Fraction &f1);

  friend std::ostream& operator<< (std::ostream &out, const Fraction &f);
  friend std::istream& operator>> (std::istream &in, Fraction &fraction);

};
