#include "Bus.h"

Bus::Bus() {
	cout << " The default constructor of the class was called Bus" << endl;
	stamp = "No data available";
	model = "No data available";
	number_seats = 0;
	number_of_passenger_seats = 0;
	destination = "No data available";
}


Bus::Bus(const Bus& obj) {
	*this = obj;
}

Bus::~Bus() {
	cout << "The class destructor was called Bus" << endl;
}

Bus& Bus::operator=(const Bus& other) {
	this->stamp = other.stamp;
	this->number_seats = other.number_seats;
	this->number_of_passenger_seats = other.number_of_passenger_seats;
	this->model = other.model;
	this->destination = other.destination;

	return *this;
}

istream& operator>>(istream& in, Bus& obj) {
	cout << "Input bus brand: ";
	getchar();
	getline(in, obj.stamp);

	cout << "Input information about model: ";
	in >> obj.model;

	cout << "Input information number seats: ";
	while (!(in >> obj.number_seats))
	{
		if (in.eof())
		{
			throw "eof";
		}
		in.clear(); //Сбрасываем флаг ошибки, если таковая была
		in.ignore(1000, '\n'); //Игнорируем оставшиеся в потоке данные
		cout << "Try again: ";
	}

	cout << "Input information about number of passenger seats: ";
	while (!(in >> obj.number_of_passenger_seats))
	{
		if (in.eof())
		{
			throw "eof";
		}
		in.clear(); //Сбрасываем флаг ошибки, если таковая была
		in.ignore(1000, '\n'); //Игнорируем оставшиеся в потоке данные
		cout << "Try again: ";
	}

	cout << "Input information about destination: ";
	in >> obj.destination;

	return in;
}

ostream& operator<<(ostream& out, Bus& obj) {
	out << "Bus brand: " << obj.stamp << endl;
	out << "Model of Bus: " << obj.model << endl;
	out << "Information about number seats : " << obj.number_seats << endl;
	out << "Information about number of passenger seats: " << obj.number_of_passenger_seats << endl;
	out << "Information about destination: " << obj.destination << endl;
	
	return out;
}

ofstream& operator<<(ofstream& fout, Bus& obj)
{
	fout << obj.stamp << endl;
	fout << obj.model << endl;

	fout << obj.number_seats << endl;
	fout << obj.number_of_passenger_seats << endl;
	fout << obj.destination << endl;
	
	return fout;
}

ifstream& operator>>(ifstream& fin, Bus& obj)
{
	fin >> obj.stamp;
	fin >> obj.model;
	fin >> obj.number_seats;
	fin >> obj.number_of_passenger_seats;
	fin >> obj.destination;
	return fin;
}

bool Bus::sort_model(Bus& obj, string model)
{
	return obj.model == model;
}

bool Bus::sort_stamp(Bus& obj, string stamp)
{
	return obj.stamp == stamp;
}

void Bus::redact(Bus& obj)
{
	int index;
	cout << "What you want to redact (1-4) 5-exit: " << endl;
	cin >> index;
	switch (index)
	{
	case 1:
		cout << "Input bus brand: ";
		getchar();
		getline(cin, obj.stamp); break;
	case 2:
		cout << "Input information about model: ";
		cin >> obj.model; break;
	case 3:
		cout << "Input information number seats: ";
		while (!(cin >> obj.number_seats))
		{
			if (cin.eof())
			{
				throw "eof";
			}
			cin.clear(); //Сбрасываем флаг ошибки, если таковая была
			cin.ignore(1000, '\n'); //Игнорируем оставшиеся в потоке данные
			cout << "Try again: ";
		} break;
	case 4:
		cout << "Input information about number of passenger seats: ";
		while (!(cin >> obj.number_of_passenger_seats))
		{
			if (cin.eof())
			{
				throw "eof";
			}
			cin.clear(); //Сбрасываем флаг ошибки, если таковая была
			cin.ignore(1000, '\n'); //Игнорируем оставшиеся в потоке данные
			cout << "Try again: ";
		} break;
	case 5:
		cout << "Input information about destination: ";
		cin >> obj.destination;	
	case 6:
		cout << "succesesfuil redact" << endl;
	default:
		break;
	}
}