
#pragma once
#include <iostream>
#include "Person.h"
using namespace std;
class Student : public Person {
private:
	string NumberGroup;
	string AddData; // Дата зачисления
	string AvgScore;


public:
	Student();
	Student(Student&);
	~Student();
	string getFIO() override;
	string getBornData() override;
	void setBornData(const string& value) override;
	void setFIO(const string& value) override;
	string getNumberGroup();
	string getAddData();
	string getAvgScore();
	void setNumberGroup(const string& value);
	void setAddData(const string& value);
	void setAvgScore(const string& value);
	void PrintAllInfo(Student);
	void enterF(ifstream& op1, Student);
	void fprint(ofstream& op1, Student);
	void getDescription();
	void getDescriptionf(ofstream& op1);
};