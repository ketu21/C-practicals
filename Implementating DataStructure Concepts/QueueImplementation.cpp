

#include<>
using namespace std;
const int maxqueue = 5;
class queue_type
{
public:
	
	void insert(string numb);
	void remove(string& numb); 
	void clear();
	bool empty();
	bool full();
	string queue[6];
	int front, rear;
};

//---------------------------------------------------------------------
int main()
{
	queue_type knock, bashem, street, tempr;
	int i = 0, n = 0, charge, temp1 = 0, temp2 = 0, temp3 = 0, c = 0;
	string vehicle, temp;
	char choice;
	knock.clear();
	bashem.clear();
	street.clear();
	tempr.clear();
	

	while (i != 1)
	{
		cout << "Enter an 'a' if your car is arriving or enter a 'd' if your car is departing or Enter e to exit : \n";
		cin >> choice;
	switch (choice)
	{
	case 'a' :
		cout << "Enter the car number to continue with arrival\n";
		cin >> vehicle;
		if (knock.full() != true)
		{
			knock.insert(vehicle);
			cout << "Car " << vehicle << "  parked in the knockemdead. " << endl;
		}
		else if (bashem.full() != true)
		{
			bashem.insert(vehicle);
			cout << "Car " << vehicle << " parked in the bashemup. " << endl;
		}
		else if (street.full() != true)
		{
			street.insert(vehicle);
			cout << "Car " << vehicle << " parked on the street. " << endl;
		}
		else
		{
			cout << "Go to boston\n";
		}
		break;

	case 'd':
		cout << "Enter your car number to remove from the garage\n";
		cin >> vehicle;
		do
		{
			i++;
			knock.remove(temp);
			if (temp == vehicle)
			{
				n = 1;
				temp1 = 1;
				i--;
				cout << "Your vehicle with license plate number " << temp << " found in Knockemdead garage\n";
				if (i == 0)
				{

					cout << "The total parking fee for your car is $" << (charge = 10) << endl;
					c = c + 10;
				}
				else if (i == 1)
				{

					cout << "The total parking fee for your car is $" << (charge = 20) << endl;
					c = c + 20;
				}
				else if (i > 1)
				{

					cout << "The total parking fee for your car is $" << (charge = 25) << endl;
					c = c + 25;
				}
			}
			else
			{
				tempr.insert(temp);
			}
		} while (!knock.empty());

		if (temp1 == 1)
		{
			knock.clear();
			for (int j = 1; j <= i; j++)
			{
				tempr.remove(temp);
				knock.insert(temp);
			}
		}

		if (!(street.empty()))
		{
			if (temp1 == 1)
			{
				street.remove(temp);
				knock.insert(temp);
				cout << "The car number " << temp << " is placed in knockemdead garage from street\n";
			}
		}
		i = 0;


		while (!bashem.empty() && n != 1)
		{
			i++;
			bashem.remove(temp);
			if (temp == vehicle)
			{
				n = 1;
				temp2 = 1;
				i--;
				cout << "Your vehicle with license plate number " << temp << " found in Bashemup garage\n";
				if (i == 0)
				{

					cout << "The total parking fee for your car is $" << (charge = 10) << endl;
					c = c + 10;
				}
				else if (i == 1)
				{

					cout << "The total parking fee for your car is $" << (charge = 20) << endl;
					c = c + 20;
				}
				else if (i > 1)
				{

					cout << "The total parking fee for your car is $" << (charge = 25) << endl;
					c = c + 25;
				}
			}
			else
			{
				tempr.insert(temp);
			}

		}
		if (temp2 == 1)
		{
			bashem.clear();
			for (int j = 1; j <= i; j++)
			{
				tempr.remove(temp);
				bashem.insert(temp);
			}
		}
		i = 0;

		if (!(street.empty()))
		{
			if (temp2 == 1)
			{
				street.remove(temp);
				knock.insert(temp);
				cout << "The car number " << temp << " is placed in bashemup garage from street\n";
			}
		}


		while (!street.empty() && n != 1)
		{
			i++;
			bashem.remove(temp);
			if (temp == vehicle)
			{
				n = 1;
				i--;
				cout << "Your vehicle with license plate number" << temp << " found in street\n";
			}
			tempr.insert(temp);
		}

		break;
	case 'e':
		i = 0;
		while (!knock.empty())
		{
			knock.remove(temp);
			i++;
		}
		cout << "The total number of vehicles found in knockemdead garage is: " << i << endl;
		i = 0;
		while (!bashem.empty())
		{
			bashem.remove(temp);
			i++;
		}
		cout << "The total number of vehicles found in bashemup garage is: " << i << endl;
		i = 0;
		while (!street.empty())
		{
			street.remove(temp);
			i++;
		}
		cout << "The total number of vehicles found in street is: " << i << endl;
		cout << "Total Fees collected: $" << c << endl;
		cout << "Enter  to exit\n";
		system("pause");
		exit(0);
		
		break;
	default:
		break;
	}
}

		

	cin >> i;
	return 0;
}

//----------------------------------------------------------------------
void queue_type::clear()
{
	front = maxqueue;
	rear = maxqueue;
}
//----------------------------------------------------------------------
bool queue_type::empty()
{
	if (rear == front)
		return true;
	else
		return false;
}
//----------------------------------------------------------------------
bool queue_type::full()
{
	int querear;
	if (rear == maxqueue)
		querear = 0;
	else
		querear = rear + 1;
	if (querear == front)
		return true;
	else
		return false;
}
//----------------------------------------------------------------------
void queue_type::insert(string numb)
{
	if (rear == maxqueue)
		rear = 0;
	else
		rear = rear + 1;
	queue[rear] = numb;
}
//----------------------------------------------------------------------
void queue_type::remove(string& numb)
{
	if (front == maxqueue)
		front = 0;
	else
		front = front + 1;
	numb = queue[front];

}