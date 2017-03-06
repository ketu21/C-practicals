
#include<iostream>
using namespace std;
int const max = 70;
class palindrome_prog
{
public:
	void clr();
	bool empty();
	bool stack_status();
	void push(char n);
	void pop(char& n);
	char stack[max];

	int top;
};
bool palindrome = false;
int compare(char char1, char char2);
void main()
{
	int count = 0, mid = 0;
	palindrome_prog stack1, stack2, stack3;
	char value, P, Q, R;
	stack1.clr();
	stack2.clr();
	stack3.clr();
	cout << "Please enter a string to check whether it is a PALINDROME or not.\nEnter $ to end.  :\n";
	cin >> value;
	while (!(stack1.stack_status()) && (value != '$'))
	{
		stack1.push(value);
		//stack2.push(value);
		count++;
		cin >> value;
	}
	mid = count / 2;
	
	while (mid >0)
	{
		stack1.pop(P);
		stack2.push(P);
		mid--;
	}
	/*while (!stack2.empty())
	{
	stack2.pop(P);
	stack3.push(P);
	}*/
	if ((count % 2) == 1)
	{
		stack1.pop(P);
	}
	else{}

	while ((!stack1.empty()) && (!stack2.empty()))
	{
		stack1.pop(Q);
		stack2.pop(R);
		
		int a=compare(Q, R);
		if (a == 1)
			break;
	}
	if (palindrome == true)
		cout << "The given input is a palindrome.\n";
	else
		cout << "Given input is not a palindrome.\n";

	system("PAUSE");
}
//function to compare the value from the stack.
int compare(char char1, char char2)
{
	int n1 = char1;
	int n2 = char2;

	if (n1 == n2)
	{
		palindrome = true; return(0);
	}
	else
	{
		palindrome = false;
		return(1);
	}
}
//Function for stack
void palindrome_prog::clr()
{
	top = 0;
}

bool palindrome_prog::empty()
{
	if (top == 0)
		return true;
	else
		return false;
}

bool palindrome_prog::stack_status()
{
	if (top == max - 1)
		return true;
	else
		return false;
}

void palindrome_prog::push(char n)
{
	top = top + 1;
	stack[top] = n;
}

void palindrome_prog::pop(char& n)
{
	n = stack[top];
	top = top - 1;
}
