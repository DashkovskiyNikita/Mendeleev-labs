#include <iostream>
using namespace std;

void fill_matrix(int** matrix, const int M, const int N) {
    for(int i = 0; i < M; i++) {
        matrix[i] = new int[N];
        for (int j = 0; j < N; j++) {
            matrix[i][j] = rand() % 51;
        }
    }
}

void clear_matrix(const int** matrix, const int M) {
    for (int i = 0; i < M; i++) delete[] matrix[i];
    delete[] matrix;
}

void print_matrix(int** matrix, const int M, const int N) {
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
}

void dellJ(int**& matrix, int& M, int& N, const int i, const int j) {
    
    if (i >= M || j >= N) return;
    
    int** newMatrix = new int* [M - 1];
    
    int oldRow = 0;
    int oldCol = 0;
    
    for (int a = 0; a < M - 1; a++) {
        
        newMatrix[a] = new int[N - 1];
        
        if (oldRow == i) oldRow++;
        
        for (int b = 0; b < N - 1; b++) {
            if (oldCol == j) oldCol++;
            newMatrix[a][b] = matrix[oldRow][oldCol++];
        }
        
        oldRow++;
        oldCol = 0;
    
    }
    clear_matrix(matrix, M);
    matrix = newMatrix;
    M -= 1;
    N -= 1;
}

int main()
{
    srand(time(0));
    int M = 3,N = 4;
    int i, j;
    int** matrix = new int*[M];
    cin >> i;
    cin >> j;
    //initial array
    fill_matrix(matrix, M, N);
    print_matrix(matrix, M, N);
    //array after deleting i row and j column
    dellJ(matrix, M, N, i, j);
    print_matrix(matrix, M, N);
}