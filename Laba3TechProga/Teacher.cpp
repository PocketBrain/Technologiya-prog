#include <iostream>
#include "Teacher.h"

#include <string>
#include <fstream>


string Teacher::getFIO() {
	return FIO;
}
void Teacher::setFIO(const string& value) {
	FIO = value;
}
string Teacher::getBornData() {
	return BornData;
}
void Teacher::setBornData(const string& value) {
	BornData = value;
}


Teacher::Teacher() {
	ListLesson = "";
	NumLessons = "";
	FIO = "";
	BornData = "";
}
Teacher::Teacher(Teacher& op1)
{
	FIO = op1.FIO;
	BornData = op1.BornData;
	ListLesson = op1.ListLesson;
	NumLessons = op1.NumLessons;
}

Teacher::~Teacher()
{
}
string Teacher::getListLesson() {
	return ListLesson;
}
string Teacher::getNumLessons() {
	return NumLessons;
}
void Teacher::setListLesson(const string& value) {
	ListLesson = value;
}void Teacher::setNumLessons(const string& value) {
	NumLessons = value;
}

void Teacher::PrintAllInfo(Teacher teacher) {
	cout << "FIO : " << teacher.getFIO() << endl;
	cout << "BORN DATA : " << teacher.getBornData() << endl;
	cout << "ListLesson : " << teacher.getListLesson() << endl;
	cout << "NumLessons : " << teacher.getNumLessons() << endl;
}
void Teacher::getDescription()
{
	cout << "This is the Teacher." << endl;
}

void Teacher::getDescriptionf(ofstream& op1)
{
	op1 << "---------------This is the Teacher.-----------------" << endl;
}
void Teacher::enterF(ifstream& op1, Teacher teacher) {
	string value;
	value = teacher.getFIO();
	getline(op1, value);
	value = teacher.getBornData();
	getline(op1, value);
	value = teacher.getListLesson();
	getline(op1, value);
	value = teacher.getNumLessons();
	getline(op1, value);


}


void Teacher::fprint(ofstream& op1, Teacher teacher)
{
	getDescriptionf(op1);
	op1 << "FIO : " << teacher.getFIO() << endl;
	op1 << "BORN DATA : " << teacher.getBornData() << endl;
	op1 << "ListLesson : " << teacher.getListLesson() << endl;
	op1 << "NumLessons : " << teacher.getNumLessons() << endl;
}