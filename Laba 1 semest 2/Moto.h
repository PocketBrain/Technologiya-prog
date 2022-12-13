#pragma once
#include "Garage.h"

class Moto : public Garage {
protected:
	int engine_capacity; //� ���
	int engine_power; //� ���
	string terrain;
public:
	Moto();
	Moto(const Moto& obj);
	~Moto();

	Moto& operator= (const Moto& other);
	void redact(Moto&);
	bool sort_model(Moto&, string model);
	bool sort_stamp(Moto&, string model);
	friend ostream& operator<<(ostream&, Moto&);
	friend istream& operator>>(istream&, Moto&);
	friend ofstream& operator<<(ofstream&, Moto&);
	friend ifstream& operator>>(ifstream&, Moto&);
};

