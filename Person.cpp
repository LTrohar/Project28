#include "Person.h"

Person::Person(string name, string surname)
{
	this->name = name;
	this->surname = surname;
	OIB = "/";

	char flag;
	cout << "Zelite li unijeti OIB ? (y or n)" << endl;
	cin >> flag;
	if (flag == 'y')
	{
		cout << "Upsite OIB : " << endl;
		cin >> OIB;
	}
	
	
}

void Person::set_name(string name)
{
	this->name = name;
}

void Person::set_surname(string surname)
{
	this->surname = surname;
}

void Person::set_OIB(string OIB)
{
this->OIB = OIB;
}

string Person::get_name()
{
	return name;
}

string Person::get_surname()
{
	return surname;
}

string Person::get_OIB()
{
	return OIB;
}

string Person::to_string()
{

	stringstream ss;
	if (OIB == "/")
		ss << "Last name : " << surname << endl << endl << "First name : " << name << endl;
	else
		ss << "Last name : " << surname << endl << endl << "First name : " << name << endl << endl << "OIB: " << OIB << endl;

	return ss.str();
}
