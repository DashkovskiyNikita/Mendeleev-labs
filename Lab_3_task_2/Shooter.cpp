#include"Shooter.h"
#include<iostream>
using namespace std;

Shooter::Shooter(string _name, int _age, int _experience) {
	name = _name;
	age = _age;
	experience = _experience;
}

bool Shooter::shoot() {
	return false;
}

void Shooter::print_info() {
	cout << "Name : " << name << endl;
	cout << "Age : " << age << endl;
	cout << "Experience : " << experience << endl;
}