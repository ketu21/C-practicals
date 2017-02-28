#include <string>
using namespace std;

class Student
{
protected:
	int ID;
	string name;
	double GPA;
	char gender;
	string level;
public:

	Student();
	Student(int ID, string name, double GPA, char gender, string level);
	void setStudent(int ID, string name, double GPA, char gender, string level);
	int getID();
	string getName();
	double getGPA();
	char getGender();
	string getlevel();
	void writeData(Student& s);
	void readData();
	void print();

};


class ugstudent : public Student
{
	string course;
public:
	ugstudent();
	ugstudent(int ID, string name, double GPA, char gender, string level, string course);
	void setugstudent(int ID, string name, double GPA, char gender, string level, string course);
	string getcourse();
	void print();
	void writeData(ugstudent& s);
	void readData();

};

class gstudent : public Student
{
	string course;
public:
	gstudent();
	gstudent(int ID, string name, double GPA, char gender, string level, string course);
	void setgstudent(int ID, string name, double GPA, char gender, string level, string course);
	string getcourse();
	void print();
	void writeData(gstudent& s);
	void readData();
};
