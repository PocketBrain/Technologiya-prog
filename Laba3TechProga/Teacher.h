#pragma once
#include <iostream>
#include "Person.h"
using namespace std;
class Teacher : public Person {
private:
	string ListLesson;
	string NumLessons;


public:
	Teacher();
	Teacher(Teacher&);
	~Teacher();
	string getFIO() override;
	string getBornData() override;
	void setBornData(const string& value) override;
	void setFIO(const string& value) override;
	string getListLesson();
	string getNumLessons();
	void setListLesson(const string& value);
	void setNumLessons(const string& value);
	void enterF(ifstream& op1, Teacher);
	void fprint(ofstream& op1, Teacher);
	void PrintAllInfo(Teacher);
	void getDescription();
	void getDescriptionf(ofstream& op1);

};