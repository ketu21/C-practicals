#include<iostream>
#include"Rational.h"
using namespace std;


//function to normalize fraction
void Rational::normalize()
{
	int t, b,x,y;
	t = top; b = bottom;
	//to find the GCD
	while (t > 0)
	{
		x = t;
		t = b%t;
		b = x;
	}
	//divide by gcd both numerator and denominator to get the normalized form
	top = top / x;
	bottom = bottom / x;

}
//default constructor
Rational :: Rational()
{
	//initialize the object by taking the default value to 0 for both nemurator and denominator
	top = 0;
	bottom = 0;

}
//constructor with single parameter
Rational::Rational(int x)
{
	//since there is only one parameter then it has to be numerator so set denominator to 1
	top = x;
	bottom = 1;

}
//Constructor with two parameters
Rational::Rational(int x, int y)
{
	//there are 2 parameter one is numerator and the second one is denominator
	top = x;
	bottom = y;
	normalize();	//to check whether the fraction can be reduced or not
	
}
//this is copy constructor used to copy the value of one object into another
Rational::Rational(const Rational & a)
{
	top = a.top;
	bottom = a.bottom;
}

int Rational::numerator() const
{
	return(top);
}
int Rational::denominator() const
{
	return(bottom);
}
//overloading the = operator 
void Rational::operator =(const Rational r) 
{
	//this method is used to assign value of one object or output of some opertion on objects into another object
	top = r.top;
	bottom = r.bottom;
}
//overloading operator +
Rational Rational::operator +(const Rational r)
{
	int t=0, b=0;
	if (bottom == r.bottom)	//check if denominator are same the directly add the numerators
	{
		t = top + r.top;
		b = bottom;
		Rational a(t, b);
		return(a);
	}
	else
	{//if denominator are not same then do cross multiplication and addition
		t = (top * r.bottom) + (bottom * r.top);
		b = bottom * r.bottom;
		Rational a(t, b);
		return(a);
	}
	
}
//overloading * operator
Rational Rational::operator *(const Rational r)
{
	//simply multiply the numerator to numerator and denominator to denominator
	int t, b;
	t = top *r.top;
	b = bottom*r.bottom;
	Rational a(t, b);
	return(a);
}
//funtion to display output
void Rational::display()
{
	cout << "\n" <<top << "/" <<bottom<<endl;
}
//overloading << operator
 ostream& operator <<(ostream& out, Rational& r)
 {
	 out << r.top << "/" << r.bottom;
	 return(out);
 }