#include<iostream>
#include<conio.h>
using namespace std;

void main()
{
	double celcius[3], faren[3];
	int i;
	for (i = 0;i < 3;i++)
	{
		cout << "Enter the degree celcius "<<i+1<<" 
			: " << endl;
		cin >> celcius[i];
	}
	for (i = 0;i < 3;i++)
	{
		faren[i] = ((9 * celcius[i]) / 5) + 32.0;
		cout << "The Degree Farenheat Equivalent of "<<celcius[i]<<" is : " << faren[i];
		cout << endl;
	}
	system("pause");

}