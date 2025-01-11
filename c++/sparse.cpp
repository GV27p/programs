#include <iostream>
using namespace std;

// Function to multiply two sparse matrices A and B
void multiplySparseMatrices(int A[][3], int B[][3], int C[][3], int rowsA, int colsA, int colsB) {
    // Initialize the result matrix C to zero
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            C[i][j] = 0;
        }
    }

    // Multiply A and B
    for (int i = 0; i < rowsA; ++i) {
        for (int j = 0; j < colsB; ++j) {
            for (int k = 0; k < colsA; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

// Function to print the non-zero elements of the sparse matrix
void printSparseMatrix(int matrix[][3], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] != 0) {
                cout << "{" << i << ", " << j << ", " << matrix[i][j] << "} ";
            }
        }
    }
    cout << endl;
}

int main() {
    // Sparse matrix A
    int A[6][3] = {
        {5, 5, 5},
        {0, 1, 5},
        {0, 2, 18},
        {2, 1, 14},
        {3, 1, 15},
        {3, 3, 4}
    };
    int rowsA = 4; // Number of non-zero rows in A
    int colsA = 3; // Number of columns in A

    // Sparse matrix B
    int B[6][3] = {
        {5, 5, 5},
        {0, 1, 5},
        {1, 2, 20},
        {2, 0, 8},
        {3, 1, 15},
        {3, 3, 24}
    };
    int rowsB = 4; // Number of non-zero rows in B
    int colsB = 3; // Number of columns in B

    // Resultant sparse matrix C
    int C[4][3]; // Assuming the resulting matrix will not exceed 4 rows and 3 columns

    // Perform multiplication
    multiplySparseMatrices(A, B, C, rowsA, colsA, colsB);

    // Print the result
    cout << "Resultant Sparse Matrix C (after A * B): " << endl;
    printSparseMatrix(C, rowsA, colsB);

    return 0;
}
