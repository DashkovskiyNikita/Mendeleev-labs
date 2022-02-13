#pragma once
class Matrix {
private:
	int** matrix;
	int row, col;
public:
	Matrix(int _row, int _col,int border);
	Matrix(int _row, int _col);
	
	Matrix operator + (Matrix m);
	Matrix operator - (Matrix m);
	Matrix operator * (Matrix m);
	Matrix operator * (int number);
	Matrix transportation();
	void print();

	int** getMatrix();
	int getRow();
	int getCol();
	void add(int i, int j, int value);
};
