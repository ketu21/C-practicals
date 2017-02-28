#include <iostream>
#include "money.h"
using namespace std;

Money::Money(int x, int y)
{
	if (y < 10)
	{
		y = y * 10;
	}
	dollar = x;
	cent = y;
}
Money::Money()
{
	 Get_dollars();
	 Get_cents();
}
Money::Money(double am)
{
	double amt = am * 100;
	dollar = GetDollarsPart(amt);
	cent = GetCentsParts(amt);
}

void Money::print()
{
	
	cout << "\n$" << dollar << "." << cent;
	
}

void Money::set_dollars(int mydollars)
{
	dollar = mydollars;
}
void Money::Get_dollars()
{
	int amt;
	cout << "Enter Dollar :";
	cin >> amt;
	set_dollars(amt);
	
}
void Money::set_cents(int mycents)
{
	if(mycents<10)
	{
		mycents = mycents * 10;
	}
	cent = mycents;
}
void Money::Get_cents()
{
	int amt;
	cout << "Enter Cents :";
	cin >> amt;
	set_cents(amt);
}

int Money::GetDollarsPart(double am)
{
	return(am / 100);
}
int Money::GetCentsParts(double am)
{
	return((int)am % 100);
}

Money Money::operator +(const Money & rhs) const
{
	int amt1,amt2;
	amt1 = dollar + rhs.dollar;
	amt2 = cent + rhs.cent;
	if (amt2 > 99)
	{
		amt1++;
		amt2 = amt2 - 100;
	}
	
	return(Money (amt1, amt2));
}


Money  operator - (const Money & lhs, const Money & rhs)
{
	int amt1, amt2;
	if (lhs.cent < rhs.cent)
	{
		if (lhs.dollar < rhs.dollar)
		{
			return(Money(0, 0));
		}
		else
		{
			amt1 = (lhs.dollar - 1) - rhs.dollar;
			amt2 = (lhs.cent + 100) - rhs.cent;
			return(Money(amt1, amt2));
		}
	}
	else
	{
		amt1 = lhs.dollar - rhs.dollar;
		amt2 = lhs.cent  - rhs.cent;
		return(Money(amt1, amt2));
	}
}

bool operator == (const Money & lhs, const Money & rhs)
{
	if (lhs.dollar == rhs.dollar)
	{
		if (lhs.cent == rhs.cent)
		{
			return(true);
		}
		else
		{
			return(false);
		}
	}
	else
	{
		return(false);
	}
}

std::ostream& operator <<(std::ostream& myoutputStream, Money& m)
{
	myoutputStream << m.dollar << "." << m.cent;
	return(myoutputStream);
}
std::istream& operator >>(std::istream& myinputstream, Money& m)
{
	return(myinputstream);
}