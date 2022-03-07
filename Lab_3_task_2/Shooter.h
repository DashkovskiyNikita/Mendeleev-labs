#pragma once
#include<string>
using namespace std;

class Shooter {
protected:
	string name;
	int age, experience;
	double probability;
public:
	Shooter(string _name, int _age, int _experience);
	virtual bool shoot();
	void print_info();
};
