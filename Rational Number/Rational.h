#include<iostream>
using namespace std;

class Rational
{
private:
	int top;
	int bottom;
	void normalize();
public:
	Rational();
	Rational(int);
	Rational(int, int);
	Rational(const Rational &);
	int numerator() const;
	int denominator() const;
	void operator =(const Rational);
	Rational operator +(const Rational);
	Rational operator *(const Rational);
	void display();
	friend ostream& operator<<(ostream& out, Rational& Rational);

};
