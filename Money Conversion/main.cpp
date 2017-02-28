// homework3.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "money.h"
using namespace std;


int main()
{
	Money m1;
	cout << "The value of M1=";
	m1.print();
	cout << endl;
	double myinput;
	//cout<<"Enter the dollars and cents"<<endl; 
//	cin>>myinput; 
	Money m2(4,5);
	cout << "The value of M2=";
	m2.print();
	cout << endl;
	/*cout<<"Enter the dollars and cents"<<endl;
	cin>>myinput;*/
	Money m3(5.75);
	cout << "The value of M3=";
	m3.print();
	cout << endl;
	Money m4 = m2 + m3;
	cout << "The value of M2+M3=";
	m4.print();
	cout << endl;
	Money m5 = m2 - m3;
	cout << "The value of M2-M3=";
	m5.print();
	cout << endl;
	Money m6 = m3 - m2;
	cout << "The value of M3-M2=";
	m6.print();
	cout << endl;
	int a = m5 == m6;
	if (a == 1)
	{
		cout << "values m5 and m6 are same" << endl;
	}
	else
	{cout << "values m5 and m6 are not same"<<endl;}

	cout << "the value of M4 = ";
	cout <<"$"<< m4; 
	cout << endl;
	Money m7;
	cin >> m7; 
	cout << "the value of M7 = ";
	cout << "$"<<m7;
	cout << endl;

	
	cout << endl;
	system("pause");
    return 0;
}

