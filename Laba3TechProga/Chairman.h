#pragma once

#include <iostream>
#include "Person.h"
using namespace std;

class Ñhairman : public Person {
private:
	string NameKafedra;


public:
	Ñhairman();
	Ñhairman(Ñhairman&);
	~Ñhairman();
	string getFIO() override;
	string getBornData() override;
	void setBornData(const string& value) override;
	void setFIO(const string& value) override;
	string getNameKafedra();
	void setNameKafedra(const string& value);
	void PrintAllInfo(Ñhairman);
	void enterF(ifstream& op1, Ñhairman);
	void fprint(ofstream& op1, Ñhairman);
	void getDescription();
	void getDescriptionf(ofstream& op1);
};


