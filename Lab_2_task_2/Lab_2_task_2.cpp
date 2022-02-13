#include <iostream>
#include "Matrix.h"
using namespace std;

int main()
{
	srand(time(0));
	
	//test matrix1
	Matrix matrix1(3, 3, 10);
	matrix1.print();
	
	//test matrix2
	Matrix matrix2(3, 3, 10);
	matrix2.print();
	
	//test plus
	Matrix sum = matrix1 + matrix2;
	sum.print();

	//test minus
	Matrix minus = matrix1 - matrix2;
	minus.print();

	//test  multiply on matrix
	Matrix multiply1 = matrix1 * matrix2;
	multiply1.print();

	//test multiply on number
	Matrix multiply2 = matrix1 * 10;
	multiply2.print();

	//test transportation
	Matrix transportation = matrix1.transportation();
	transportation.print();
}
