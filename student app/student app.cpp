#include <iostream>
#include "student.h"
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

//void writeData(Student& s);
void readData();

int main()
{
	int i, choice1,choice2;
	Student s;
	ugstudent ugs;
	gstudent gs;
	int ID;
	string name;
	double GPA;
	char gender;
	string level;
	string course;
	while (1)
	{
		system("CLS");
		cout << "       Student Application";
		cout << "----------------------------------------------";
		cout << "\n1.Add record" << "\n2.Print Student Record" << "\n3.Print UGrad student record" <<"\n4.Print Grad student record"<<"\n5.Exit";
		cin >> i;
		switch (i)
		{
		case 1:
			cout << "Enter ID ";  cin >> ID;
			cout << "Enter name ";	cin >> name;
			cout << "Enter GPA ";	cin >> GPA;
			cout << "Enter gender ";	cin >> gender;
			cout << "Select level: 1:Grad\t2:Under Grad\t3:PHD.";
			cin >> choice1;
			if (choice1 == 1)
			{
				level = "Grad";
				cout << "Select Course: 1:Comp Science\t2:\Mech \t3:IT\t4.Electrical.";
				cin >> choice2;
			}
			else if (choice1 == 2)
			{
				level = "UGrad";
				cout << "Select Course: 1:Comp Science\t2:\Mech \t3:IT\t4.Electrical.\t5.Bussiness\t6.Cyber security";
				cin >> choice2;
			}
			else if (choice1 == 3)
			{
				level == "PHD";
				cout << "Select Course: 1:Comp Science\t2:\Mech \t3.IT\t4.Elect.";
				cin >> choice2;
			}
			else
			{
				cout << "incorrect choice option. Please try again....";
				system("pause");
				break;
			}
			
			if (choice2 == 1) { course = "CompSci"; }
			else if (choice2 == 2) { course == "Mech"; }
			else if (choice2 == 3) { course == "IT"; }
			else if (choice2 == 4) { course == "Elect"; }
			else if (choice2 == 5) { course == "Bussi"; }
			else if (choice2 == 6) { course == "CyberSEC"; }
			else{
				cout << "incorrect choice option. Please try again....";
				system("pause");
				break;
			}

			if (level == "UGrad")
			{
				ugs.setugstudent(ID, name, GPA, gender, level, course);
				ugs.writeData(ugs);
				break;
			}
			else if (level == "Grad")
			{
				gs.setgstudent(ID, name, GPA, gender, level, course);
				gs.writeData(gs);
				break;
			}

		case 2:
			s.readData();	
			system("pause");
			break;

		case 3:
			ugs.readData();
			system("pause");
			break;

		case 4:
			gs.readData();
			system("pause");
			break;
		case 5:
			exit(0);

		}

	}
	system("pause");
	return 0;
}
/*void writeData(Student& s)
{
	fstream stdFile;
	stdFile.open("studentInfo.txt", ios::app);

	stdFile << s.getID() << "\n";
	stdFile << s.getName() << "\n";
	stdFile << s.getGPA() << "\n";
	stdFile << s.getGender() << "\n";
	stdFile << s.getlevel() << "\n";
	stdFile.close();
}*/

/*void readData()
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

}*/