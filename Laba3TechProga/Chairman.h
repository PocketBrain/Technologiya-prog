#pragma once

#include <iostream>
#include "Person.h"
using namespace std;

class �hairman : public Person {
private:
	string NameKafedra;


public:
	�hairman();
	�hairman(�hairman&);
	~�hairman();
	string getFIO() override;
	string getBornData() override;
	void setBornData(const string& value) override;
	void setFIO(const string& value) override;
	string getNameKafedra();
	void setNameKafedra(const string& value);
	void PrintAllInfo(�hairman);
	void enterF(ifstream& op1, �hairman);
	void fprint(ofstream& op1, �hairman);
	void getDescription();
	void getDescriptionf(ofstream& op1);
};


