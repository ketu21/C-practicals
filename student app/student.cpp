
#include "student.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

Student::Student()
{
	ID = 0;
	name = "";
	GPA = 0;
	gender = ' ';
	level = ' ';
}
Student::Student(int ID, string name, double GPA, char gender, string level)
{
	this->ID = ID;
	this->name = name;
	this->GPA = GPA;
	this->gender = gender;
	this->level = level;
}
void Student::setStudent(int ID, string name, double GPA, char gender,string level)
{
	this->ID = ID;
	this->name = name;
	this->GPA = GPA;
	this->gender = gender;
	this->level = level;
}
int Student::getID()
{
	return ID;
}
string Student::getName()
{
	return name;
}
double Student::getGPA()
{
	return GPA;
}
char Student::getGender()
{
	return gender;
}
string Student::getlevel()
{
	return level;
}
void Student::print()
{
	cout << "ID : " << ID << endl;
	cout << "Name : " << name << endl;
	cout << "GPA : " << GPA << endl;
	cout << "Gender : " << gender << endl;
	cout << "Level : " << level << endl;
}
ugstudent::ugstudent()
{
	Student();
	course = "";

}
void Student::writeData(Student& s)
{
	fstream stdFile;
	stdFile.open("studentInfo.txt", ios::app);

	stdFile << s.getID() << "\n";
	stdFile << s.getName() << "\n";
	stdFile << s.getGPA() << "\n";
	stdFile << s.getGender() << "\n";
	stdFile << s.getlevel() << "\n";
	stdFile.close();
}
void Student::readData()
{
	fstream stdFile;
	stdFile.open("studentInfo.txt", ios::in);

	if (stdFile.fail())
	{
		cout << "File could not be open. Please try option 1 then option 2.\n" << endl;
		return;
	}
	else
	{
		string ID, name, GPA, gender, level;
		while (getline(stdFile, ID))
		{
			//getline(stdFile, ID, '\n');
			getline(stdFile, name, '\n');
			getline(stdFile, GPA, '\n');
			getline(stdFile, gender, '\n');
			getline(stdFile, level, '\n');
			cout << ID << " " << name << " " << GPA << " " << gender << " " << level << endl;
		}
		stdFile.close();
	}

}


ugstudent::ugstudent(int ID, string name, double GPA, char gender, string level, string course)
{
	Student( ID, name, GPA, gender, level);
	this->course = course;
}
void ugstudent::setugstudent(int ID, string name, double GPA, char gender, string level,string course)
{
	this->ID = ID;
	this->name = name;
	this->GPA = GPA;
	this->gender = gender;
	this->level = level;
	this->course = course;
}
string ugstudent::getcourse()
{
	return course;
}
void ugstudent::print()
{
	cout << "ID : " << ID << endl;
	cout << "Name : " << name << endl;
	cout << "GPA : " << GPA << endl;
	cout << "Gender : " << gender << endl;
	cout << "Level : " << level << endl;
	cout << " Course : " << course << endl;

}
void ugstudent::writeData(ugstudent& s)
{
	Student std;
	std.writeData(s);
	fstream stdFile;
	stdFile.open("ugstudentInfo.txt", ios::app);

	stdFile << s.getID() << "\n";
	stdFile << s.getName() << "\n";
	stdFile << s.getGPA() << "\n";
	stdFile << s.getGender() << "\n";
	stdFile << s.getlevel() << "\n";
	stdFile << s.getcourse() << "\n";
	stdFile.close();
}
void ugstudent::readData()
{
	fstream stdFile;
	stdFile.open("ugstudentInfo.txt", ios::in);

	if (stdFile.fail())
	{
		cout << "File could not be open. Please try option 1 then option 2.\n" << endl;
		return;
	}
	else
	{
		string ID, name, GPA, gender, level,course;
		while (getline(stdFile, ID))
		{
			//getline(stdFile, ID, '\n');
			getline(stdFile, name, '\n');
			getline(stdFile, GPA, '\n');
			getline(stdFile, gender, '\n');
			getline(stdFile, level, '\n');
			getline(stdFile, course, '\n');
			cout << ID << " " << name << " " << GPA << " " << gender << " " << level <<" "<<course<< endl;
		}
		stdFile.close();
	}

}

gstudent::gstudent()
{
	Student();
	course = "";
}
gstudent::gstudent(int ID, string name, double GPA, char gender, string level, string course)
{
	Student( ID, name, GPA, gender, level);
	this->course = course;
}
void gstudent::setgstudent(int ID, string name, double GPA, char gender, string level, string course)
{
	this->ID = ID;
	this->name = name;
	this->GPA = GPA;
	this->gender = gender;
	this->level = level;
	this->course = course;
}
string gstudent::getcourse()
{
	return course;
}
void gstudent::print()
{
	cout << "ID : " << ID << endl;
	cout << "Name : " << name << endl;
	cout << "GPA : " << GPA << endl;
	cout << "Gender : " << gender << endl;
	cout << "Level : " << level << endl;
	cout << " Course : " << course << endl;

}
void gstudent::writeData(gstudent& s)
{
	Student std;
	std.writeData(s);
	fstream stdFile;
	stdFile.open("gstudentInfo.txt", ios::app);

	stdFile << s.getID() << "\n";
	stdFile << s.getName() << "\n";
	stdFile << s.getGPA() << "\n";
	stdFile << s.getGender() << "\n";
	stdFile << s.getlevel() << "\n";
	stdFile << s.getcourse() << "\n";
	stdFile.close();
}
void gstudent::readData()
{
	fstream stdFile;
	stdFile.open("gstudentInfo.txt", ios::in);

	if (stdFile.fail())
	{
		cout << "File could not be open. Please try option 1 then option 2.\n" << endl;
		return;
	}
	else
	{
		string ID, name, GPA, gender, level, course;
		while (getline(stdFile, ID))
		{
			//getline(stdFile, ID, '\n');
			getline(stdFile, name, '\n');
			getline(stdFile, GPA, '\n');
			getline(stdFile, gender, '\n');
			getline(stdFile, level, '\n');
			getline(stdFile, course, '\n');
			cout << ID << " " << name << " " << GPA << " " << gender << " " << level << " " << course << endl;
		}
		stdFile.close();
	}

}