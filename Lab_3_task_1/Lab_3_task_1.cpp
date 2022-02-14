#include <iostream>
#include"List.h"
#include"SquareList.h"
#include"TriangleList.h"
#include<vector>

using namespace std;

void generateRectangleLists(vector<List*>& lists,int count) {
	for (int i = 0; i < count; i++) {
		int height = (1 + i) * 1000;
		int width = (2 + i) * 1000;
		lists.push_back(new List(height, width));
	}
}

void generateSquareLists(vector<List*>& lists, int count) {
	for (int i = 0; i < count; i++) {
		int size = (1 + i) * 1000;
		lists.push_back(new SquareList(size));
	}
}

void generateTriangleLists(vector<List*>& lists, int count) {
	for (int i = 0; i < count; i++) {
		int height = (1 + i) * 1000;
		int width = (2 + i) * 1000;
		lists.push_back(new TriangleList(height, width));
	}
}

int main()
{
	vector<List*> lists;
	
	generateRectangleLists(lists, 7);
	generateSquareLists(lists, 5);
	generateTriangleLists(lists, 3);
	
	float square = 0.0f, weight = 0.0f;
	
	for (auto list : lists) {
		list->print_info();
		square += list->square();
		weight += list->weight();
	}

	cout << "Total square : " << square << endl;
	cout << "Total weight : " << weight << endl;
}
