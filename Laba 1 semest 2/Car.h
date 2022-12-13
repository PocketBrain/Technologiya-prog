#pragma once
#include "Garage.h"

class Car : public Garage {
protected:
	int engine_capacity; //� ���
	string colour;
	string CIO; //���
public:
	Car();
	Car(const Car& obj);
	~Car();

	Car& operator= (const Car& other);
	void redact(Car&);
	bool sort_model(Car&, string model);
	bool sort_stamp(Car&, string model);
	friend ostream& operator<<(ostream&, Car&); // ����� ������ �� �����
	friend istream& operator>>(istream&, Car&); // ���� � ����������
	friend ofstream& operator<<(ofstream&, Car&); // ����� �� �����
	friend ifstream& operator>>(ifstream&, Car&); //���� � ����
};