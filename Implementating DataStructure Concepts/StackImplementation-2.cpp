#include <iostream>
using namespace std;
int const max = 30;
class Prime_number		// declaration of class//
{
public:
	void clear_stack();	//member functions//
	bool empty_stack(); //    of class stack_type//
	bool full_stack();
	void push(int numb);
	void pop(int& numb);
	int stack[max];
	int top;
};

int main()
{
	Prime_number stk;
	int P,R,i;
	stk.clear_stack();

	cout << "enter a Num :" << endl;
	cin >> R;

	for (i = 2; i <=R; i++)
	{
		
		if (R%i == 0)
		{
			stk.push(i);
			R = R / 2;
			while (R%i==0)
			{
				stk.push(i);
				R = R / 2;
			}
		}
		
	}

	
	while (!(stk.empty_stack()))
	{
		stk.pop(P);
		cout << P << "\t";

	}
	cout << "\n";
	system("pause");
	return 0;
}
void Prime_number::clear_stack()
{
	top = 0;
}
//----------------------------------------------------------------------
bool Prime_number::empty_stack()
{
	if (top == 0)
		return true;
	else
		return false;
}
//----------------------------------------------------------------------
bool Prime_number::full_stack()
{
	if (top == max - 1)
		return true;
	else
		return false;
}
//----------------------------------------------------------------------
void Prime_number::push(int numb)
{
	top = top + 1;
	stack[top] = numb;
}
//----------------------------------------------------------------------
void Prime_number::pop(int& numb)
{
	numb = stack[top];
	top = top - 1;
}