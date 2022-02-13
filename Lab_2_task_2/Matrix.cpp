#include"Matrix.h"
#include<iostream>
using namespace std;

Matrix::Matrix(int _row, int _col,int border){
	//srand(time(0));
	row = _row;
	col = _col;
	matrix = new int* [row];
	for (int i = 0; i < row; i++) {
		matrix[i] = new int[col];
		for (int j = 0; j < col; j++) {
			matrix[i][j] = rand() % border;
		}
	}
}

Matrix::Matrix(int _row, int _col) {
	row = _row;
	col = _col;
	matrix = new int* [row];
	for (int i = 0; i < row; i++) matrix[i] = new int[col];
}

Matrix Matrix::operator+(Matrix m) {
	
	Matrix newMatrix(row,col);
	
	int** matrix2 = m.getMatrix();
	
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			int value = matrix[i][j] + matrix2[i][j];
			newMatrix.add(i, j, value);
		}
	}
	
	return newMatrix;
}

Matrix Matrix::operator-(Matrix m) {
	
	Matrix newMatrix(row, col);
	
	int** matrix2 = m.getMatrix();

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			int value = matrix[i][j] - matrix2[i][j];
			newMatrix.add(i, j, value);
		}
	}
	
	return newMatrix;
}

Matrix Matrix::operator*(int number) {
	
	Matrix newMatrix(row, col);
	
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			int value = matrix[i][j] * number;
			newMatrix.add(i, j, value);
		}
	}
	
	return newMatrix;
}
//[a00 a01 a02]   [b00 b01]   [a00 * b00 + a01 * b10 + a02 * b20    a00 * b01 + a01 * b11 + a02 * b21]
//[a10 a11 a12] * [b10 b11] = [a10 * b00 + a11 * b10 + a12 * b20    a10 * b01 + a11 * b11 + a12 * b21]
//                [b20 b21]
Matrix Matrix::operator*(Matrix m) {
	Matrix newMatrix(row, m.getCol());

	int** matrix2 = m.getMatrix();

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < m.getCol(); j++) {
			
			int value = 0;

			for (int k = 0; k < col; k++) {
				value += matrix[i][k] * matrix2[k][j];
			}
			
			newMatrix.add(i, j, value);
		}
	}

	return newMatrix;

}

//[a00 a01]      [a00 a10 a20]
//[a10 a11]  T = [a01 a11 a21]
//[a20 a21]
Matrix Matrix::transportation() {
	Matrix newMatrix(col, row);
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			int value = matrix[i][j];
			newMatrix.add(j, i, value);
		}
	}
	return newMatrix;
}

void Matrix::print() {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cout << matrix[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n";
}

int** Matrix::getMatrix() {
	return matrix;
}

int Matrix::getRow() {
	return row;
}

int Matrix::getCol() {
	return col;
}

void Matrix::add(int i, int j, int value) {
	matrix[i][j] = value;
}
