#include <iostream>

using namespace std;
void input(int ulist[26], int& n);
void Bubblesort(int ulist[26], int n);
void print(int ulist[26], int n);
void median(int ulist[26], int n);
void mode(int list[26], int n);
void frequebcy(int list[26], int n);
double average; int n, sum;
void main()
{
	int ulist[26], ch;
	input(ulist, n);
	cout << "Unsorted\n";
	print(ulist, n);
	cout << "\nSorted  : ";
	Bubblesort(ulist, n);
	cout << "\n Maximum is :" << ulist[n];
	cout << "\n Minimum is :" << ulist[0];
	cout << "\n Range   is :" << (ulist[n] - ulist[0]);
	median(ulist, n);
	mode(ulist, n);
	frequebcy(ulist, n);
	cout <<"\n";
	system("pause");
}
void input(int ulist[26], int& n)
{
	int i = 0;
	int value;
	cout << "enter number : \n";
	

	for (i = 0; i < 25; i++)
	{
		cin >> value;
		if (value != 100)
		{
			ulist[i] = value;
			n = i;
		}else
		{
			break;
		}
	}
}
void Bubblesort(int unlist[26], int n)
{
	int i, j, temp;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (unlist[j] > unlist[j + 1])
			{
				temp = unlist[j];
				unlist[j] = unlist[j + 1];
				unlist[j + 1] = temp;
			}
		}
	}
	cout << "\nAscending Order\n";
	print(unlist, n);
	cout<<"\nDescending Order\n";
	for (i = n; i >= 0; i--)
	{
		cout << "\t" << unlist[i];
	}
	
}
void print(int list[26], int n)
{	
	
	int i = 0;
	for (i = 0; i <=n;i++)
		cout <<"\t"<< list[i];
}
void median(int list[26], int n)
{
	int med = 0;
	float med2;
	//for (int i = 0; i < m; i++)
	{
		if (n % 2 ==  1 )
		{
			med = n / 2; //FOR EVEN NO.
			med2 = (float)(list[med] + list[med + 1]) / 2;

			cout << "\n MEDIAN: " << med2 << endl;
		}
		else
		{			
			med = (n / 2); //FOR ODD NO.
			cout << "\n MEDIAN: " << list[med] << endl;

		}
	}
	
}
void mode(int list[26], int n)
{
	int mode = 0, count = 0;
	int modcnt = 1;
	for (int j = 0; j < n; j++)
	{
		count = 0;
		for (int i = 0; i < n; i++)
		{
			if (list[j] == list[i])
			{
				count++;
			}
		}
		if (count > modcnt)
		{
			mode = list[j]; modcnt = count;
		}
	}
	cout << "\nMode is:" << mode;
}
void frequebcy(int list[26], int n)
{
	int count = 0;
	for (int j = 0; j < n; j++)
	{
		count = 0;
		for (int i = j+1; i < n+1; i++)
		{
			if (list[j] == list[i])
			{
				count++;
			}
			else
			{
				break;
			}
		}
		if (count > 0)
		{
			cout << "\n" << list[j] << " occurs " << count + 1 << "times";
			j = j + count;
		}

	}

}