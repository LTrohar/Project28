#pragma once
#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <array>
#include <algorithm>

using namespace std;
class Person
{
private:
	string name;
	string surname;
	string OIB;
public:
	Person(string name, string surname);
	void set_name(string name);
	void set_surname(string surname);
	void set_OIB(string OIB);
	string get_name();
	string get_surname();
	string get_OIB();



	string to_string();

};

