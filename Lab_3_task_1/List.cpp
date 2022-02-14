#include<iostream>
#include"List.h"
using namespace std;

List::List(int _height, int _width){
	height = _height;
	width = _width;
	thickness = 50;
	density = 7725;
}

float List::square() {
	//conversion to m2
	return (height * width) / 1000000;
}

float List::weight() {
	return square() * thickness / 1000 * density;
}

void List::print_info() {
	cout << "Height : " << height << endl;
	cout << "Width : " << width << endl;
	cout << "Thickness : " << thickness << endl;
	cout << "Density : " << density << endl;
	cout << "\n";
}