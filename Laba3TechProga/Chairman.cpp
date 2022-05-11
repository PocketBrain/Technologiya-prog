
#include <iostream>
#include "Chairman.h"

#include <string>
#include <fstream>




string �hairman::getFIO() {
	return FIO;
}
void �hairman::setFIO(const string& value) {
	FIO = value;
}
string �hairman::getBornData() {
	return BornData;
}
void �hairman::setBornData(const string& value) {
	BornData = value;
}


�hairman::�hairman() {
	NameKafedra = "";
	FIO = "";
	BornData = "";
}
�hairman::�hairman(�hairman& op1)
{
	FIO = op1.FIO;
	BornData = op1.BornData;
	NameKafedra = op1.NameKafedra;
}

�hairman::~�hairman()
{
}
string �hairman::getNameKafedra() {
	return NameKafedra;
}
void �hairman::setNameKafedra(const string& value) {
	NameKafedra = value;
}

void �hairman::PrintAllInfo(�hairman chairman) {
	cout << "FIO : " << chairman.getFIO() << endl;
	cout << "BORN DATA : " << chairman.getBornData() << endl;
	cout << "NameKafedra : " << chairman.getNameKafedra() << endl;
}
void �hairman::enterF(ifstream& op1, �hairman chairman) {
	string value;
	value = chairman.getFIO();
	getline(op1, value);
	value = chairman.getBornData();
	getline(op1, value);
	value = chairman.getNameKafedra();
	getline(op1, value);


}
void �hairman::getDescription()
{
	cout << "This is the �hairman." << endl;
}

void �hairman::getDescriptionf(ofstream& op1)
{
	op1 << "---------------This is the �hairman.-----------------" << endl;
}
void �hairman::fprint(ofstream& op1, �hairman chairman)
{
	getDescriptionf(op1);
	op1 << "FIO : " << chairman.getFIO() << endl;
	op1 << "BORN DATA : " << chairman.getBornData() << endl;
	op1 << "NameKafedra : " << chairman.getNameKafedra() << endl;
}