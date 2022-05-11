
#include <iostream>
#include "Chairman.h"

#include <string>
#include <fstream>




string Ñhairman::getFIO() {
	return FIO;
}
void Ñhairman::setFIO(const string& value) {
	FIO = value;
}
string Ñhairman::getBornData() {
	return BornData;
}
void Ñhairman::setBornData(const string& value) {
	BornData = value;
}


Ñhairman::Ñhairman() {
	NameKafedra = "";
	FIO = "";
	BornData = "";
}
Ñhairman::Ñhairman(Ñhairman& op1)
{
	FIO = op1.FIO;
	BornData = op1.BornData;
	NameKafedra = op1.NameKafedra;
}

Ñhairman::~Ñhairman()
{
}
string Ñhairman::getNameKafedra() {
	return NameKafedra;
}
void Ñhairman::setNameKafedra(const string& value) {
	NameKafedra = value;
}

void Ñhairman::PrintAllInfo(Ñhairman chairman) {
	cout << "FIO : " << chairman.getFIO() << endl;
	cout << "BORN DATA : " << chairman.getBornData() << endl;
	cout << "NameKafedra : " << chairman.getNameKafedra() << endl;
}
void Ñhairman::enterF(ifstream& op1, Ñhairman chairman) {
	string value;
	value = chairman.getFIO();
	getline(op1, value);
	value = chairman.getBornData();
	getline(op1, value);
	value = chairman.getNameKafedra();
	getline(op1, value);


}
void Ñhairman::getDescription()
{
	cout << "This is the Ñhairman." << endl;
}

void Ñhairman::getDescriptionf(ofstream& op1)
{
	op1 << "---------------This is the Ñhairman.-----------------" << endl;
}
void Ñhairman::fprint(ofstream& op1, Ñhairman chairman)
{
	getDescriptionf(op1);
	op1 << "FIO : " << chairman.getFIO() << endl;
	op1 << "BORN DATA : " << chairman.getBornData() << endl;
	op1 << "NameKafedra : " << chairman.getNameKafedra() << endl;
}