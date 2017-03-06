
#include <iostream>
using namespace std;

void getdata(int& grade_value);
const int nil = 0;
class node_type		 // declaration of class//
{
public:
	int integer;
	node_type *next;
};

node_type* merge(node_type *ptr, node_type *q);
void main()
{
	node_type *first, *p, *k, *newnode, *sec, *third, *firstin;
	int i, ident, int_value;
	float sum, average;
	sum = 0;
	first = new node_type;
	ptr = first;
	cout << "Enter 12 number : \n";
	getdata(int_value);
	(*first).integer = int_value;
	(*first).next = nil;
	for (i = 2; i <= 12; ++i)
	{
		getdata(int_value);
		newnode = new node_type;
		(*newnode).integer = int_value;
		(*newnode).next = nil;
//**********Links newnode to its correct position in the sorted link list ******//
		ptr = first;
		node_type **firstaddress;
		firstaddress = &first;

		while ((ptr) != nil && (*ptr).integer < (*newnode).integer)
		{
			firstaddress = &(*ptr).next;
			ptr = (*ptr).next;
		}
		
	//**********Remove the grades less than average ******//

	q = first;
	while (q != nil)
	{
		if ((*q).integer < average)
			q = (*q).next;
		else
			break;
	}
	sec = q;
	q = sec;
	cout << "Updated list ===> \n";
	while (q != nil)
	{
		cout << (*q).integer << "\n";
		q = (*q).next;
	}
	//**********Create a new List ******//

	third = new node_type;
	ptr = third;
	cout << "Enter 12 Integers for 2nd list: \n";
	getdata(int_value);
	(*third).integer = int_value;
	(*third).next = nil;
	for (i = 2; i <= 12; ++i)
	{
		getdata(int_value);
		newnode = new node_type;
		(*newnode).integer = int_value;
		(*newnode).next = nil;
		ptr = third;
		node_type **firstaddress;
		firstaddress = &third;

	}
	q = third;
	cout << "The list members \n";
	do
	{
		cout << (*q).integer << "\n";
		q = (*q).next;
	} while (q != nil);
	ptr = first;
	q = third;
	firstin = merge(ptr, q);
	q = firstin;
	do
	{
		k = (*q).next;
		if (!k || (*q).integer != (*k).integer)
		{
			q = k;
			continue;
		}
		(*p).next = (*p).next;
	} while (q != nil);
	q = firstin;
	cout << "The final updated list \n";
	
void getdata(int& grade_value)
{

	cin >> grade_value;
}

node_type* merge(node_type *ptr, node_type *q)
{
	if (ptr == nil && q == nil) return nil;
	if (ptr == nil) return q;
	if (q == nil) return ptr;
	if ((*ptr).integer < (*q).integer)
	{
		(*ptr).next = merge((*ptr).next, q);
		return ptr;
	}
	else
	{
		(*q).next = merge((*q).next, ptr);
		return q;
	}
}