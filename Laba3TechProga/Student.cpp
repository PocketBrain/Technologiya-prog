
#include <iostream>
#include "Student.h"

#include <string>
#include <fstream>


string Student::getFIO() {
	return FIO;
}
void Student::setFIO(const string& value) {
	FIO = value;
}
string Student::getBornData() {
	return BornData;
}
void Student::setBornData(const string& value) {
	BornData = value;
}

Student::Student() {
	FIO = "";
	BornData = "";

	NumberGroup = "";
	AddData = ""; // Дата зачисления
	AvgScore = "";
}
Student::Student(Student& op1)
{
	FIO = op1.FIO;
	BornData = op1.BornData;

	NumberGroup = op1.NumberGroup;
	AvgScore = op1.AvgScore;
	AddData = op1.AddData;
}

Student::~Student()
{
}
string Student::getNumberGroup() {
	return NumberGroup;
}
string Student::getAddData() {
	return AddData;
}
string Student::getAvgScore() {
	return AvgScore;
}
void Student::setNumberGroup(const string& value) {
	NumberGroup = value;
}
void Student::setAddData(const string& value) {
	AddData = value;
}void Student::setAvgScore(const string& value) {
	AvgScore = value;
}
void Student::PrintAllInfo(Student student) {
	cout << "FIO : " << student.getFIO() << endl;
	cout << "BORN DATA : " << student.getBornData() << endl;
	cout << "NumberGroup : " << student.getNumberGroup() << endl;
	cout << "AddData : " << student.getAddData() << endl;
	cout << "AvgScore : " << student.getAvgScore() << endl;
}
void Student::enterF(ifstream& op1, Student student) {
	string value;
	value = student.getFIO();
	getline(op1, value);
	value = student.getBornData();
	getline(op1, value);
	value = student.getNumberGroup();
	getline(op1, value);
	value = student.getAddData();
	getline(op1, value);
	value = student.getAvgScore();
	getline(op1, value);

}


void Student::getDescription()
{
	cout << "This is the Student." << endl;
}

void Student::getDescriptionf(ofstream& op1)
{
	op1 << "---------------This is the Student.-----------------" << endl;
}
void Student::fprint(ofstream& op1, Student student)
{
	getDescriptionf(op1);
	op1 << "FIO : " << student.getFIO() << endl;
	op1 << "BORN DATA : " << student.getBornData() << endl;
	op1 << "NumberGroup : " << student.getNumberGroup() << endl;
	op1 << "AddData : " << student.getAddData() << endl;
	op1 << "AvgScore : " << student.getAvgScore() << endl;
}