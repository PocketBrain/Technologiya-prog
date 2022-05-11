#pragma once
#include <iostream>
#include "Person.h"
using namespace std;
class Person { 
public:
	virtual string getFIO() = 0;
	virtual string getBornData() = 0;
	virtual void setBornData(const string& value) = 0;
	virtual void setFIO(const string& value) = 0;
protected:
	string FIO;
	string BornData;

};



