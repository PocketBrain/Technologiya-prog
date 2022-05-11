#include <iostream>
#include <fstream>
#include <conio.h>
#include "Chairman.h"
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include <string>

using namespace std;

int main() {
	string value;

	Student student;
	Teacher teacher;
	Ñhairman chairman;

	ifstream fin("Student.txt");
	ifstream fin1("Teacher.txt");
	ifstream fin2("Ñhairman.txt");
	ofstream fout("Result.txt");

	Student* S = new Student;
	Teacher* T = new Teacher;
	Ñhairman* C = new Ñhairman;
	char menu_choice;
	char submenu_choice;
	bool exit = true;
	int id = 0;

	do
	{
		system("cls");
		cout << "Choose:" << endl;
		cout << "1. Student." << endl;
		cout << "2. Teacher." << endl;
		cout << "3. Chairman." << endl;
		cout << "4. Exit." << endl;
		cout << ">";
		cin >> id;
		switch (id)
		{
		case 1:
			system("cls");
			cout << "1. Read information from the file." << endl;
			cout << "2. Insert your own information." << endl;
			cout << "3. Print information on the screen." << endl;
			cout << "4. Print information in the result file." << endl;
			cout << ">";
			cin >> submenu_choice;
			switch (submenu_choice) {
			case '1':
				S->enterF(fin, student);
				system("Pause");
				break;
			case '2':
				cout << "Input FIO" << endl;
				//cin >> value;
				getline(cin, value, '.');
				student.setFIO(value);
				//getchar();
				cout << "Input Birthday" << endl;
				cin >> value;
				student.setBornData(value);
				//getchar();
				cout << "Input number of group." << endl;
				cin >> value;
				student.setNumberGroup(value);
				//getchar();
				cout << "Input day of add to VYS" << endl;
				cin >> value;
				student.setAddData(value);
				//getchar();
				cout << "Input Avg Score" << endl;
				cin >> value;
				student.setAvgScore(value);
				system("Pause");
				break;
			case '3':
				student.PrintAllInfo(student);
				system("Pause");
				break;
			case '4':
				student.fprint(fout, student);
				system("Pause");
				break;
			}
			break;
		case 2:
			system("cls");
			cout << "1. Read information from the file." << endl;
			cout << "2. Insert your own information." << endl;
			cout << "3. Print information on the screen." << endl;
			cout << "4. Print information in the result file." << endl;
			cout << ">";
			cin >> submenu_choice;
			switch (submenu_choice) {
			case '1':
				T->enterF(fin, teacher);
				system("Pause");
			case '2':
				cout << "Input FIO" << endl;
				getline(cin, value, '.');
				teacher.setFIO(value);
				//getchar();
				cout << "Input Birthday" << endl;
				cin >> value;
				teacher.setBornData(value);
				//getchar();
				cout << "Input list of lesson" << endl;
				cin >> value;
				teacher.setListLesson(value);
				//getchar();
				cout << "Input number of lesson" << endl;
				cin >> value;
				teacher.setNumLessons(value);
				system("Pause");
				break;
			case '3':
				T->PrintAllInfo(teacher);
				system("Pause");
				break;
			case '4':
				T->fprint(fout, teacher);
				system("Pause");
				break;
			}
			break;
		case 3:
			system("cls");
			cout << "1. Read information from the file." << endl;
			cout << "2. Insert your own information." << endl;
			cout << "3. Print information on the screen." << endl;
			cout << "4. Print information in the result file." << endl;
			cout << ">";
			cin >> submenu_choice;
			switch (submenu_choice) {
			case '1':
				C->enterF(fin, chairman);
				system("Pause");
				break;
			case '2':
				cout << "Input FIO" << endl;
				getline(cin, value);
				chairman.setFIO(value);
				getline(cin, value, '.');
				cout << "Input Birthday" << endl;
				cin >> value;
				chairman.setBornData(value);
				getchar();
				cout << "Input name of kafedra" << endl;
				cin >> value;
				chairman.setNameKafedra(value);
				system("Pause");
				break;
			case '3':
				chairman.PrintAllInfo(chairman);
				system("Pause");
				break;
			case '4':
				chairman.fprint(fout, chairman);
				system("Pause");
				break;
			}
			break;
		case 4:
			exit = false;
			break;
		}
	} while (exit);

	fin.close();
	fin1.close();
	fin2.close();
	fout.close();
	system("Pause");
	return 0;
}