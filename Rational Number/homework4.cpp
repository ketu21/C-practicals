// homework4.cpp : Defines the entry point for the console application.
//

#include<iostream>
#include"Rational.h"
using namespace std;


void main()
{
	Rational p(3, 4), q(2, 3), r(2, 5), t, u,a(2,8);
	t = p + q;
	u = q + r;
	a.display();
	t.display();
	cout << t;
	u.display();
	cout << u;
	system("pause");

}

