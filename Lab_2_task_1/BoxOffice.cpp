#include "BoxOffice.h"
#include<iostream>
using namespace std;

BoxOffice::BoxOffice() {
	car_count = 0;
	sum = 0.0f;
}

void BoxOffice::payment() {
	sum += 0.5f;
	car_count++;
}

void BoxOffice::free_ride() {
	car_count++;
}

void BoxOffice::print_info() {
	cout << "Cars count : " << car_count << endl;
	cout << "Total sum of money : " << sum << endl;
}