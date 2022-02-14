#include"TriangleList.h"
#include<iostream>

TriangleList::TriangleList(int _height, int _width) : List(_height, _width) { }

float TriangleList::square(){
	return List::square() / 2;
}

