#include <iostream>
 
using namespace std;
 
const int MAX = 10;
 
void inMat(int mat[MAX][MAX], int r, int c) {
    cout << "Enter elements of the matrix (" << r << "x" << c << "):"<<endl;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> mat[i][j];
}
 
void multiMat(int mat1[MAX][MAX], int mat2[MAX][MAX], int result[MAX][MAX], int r1, int c1, int r2, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
 
void transMat(int matrix[MAX][MAX], int transposed[MAX][MAX], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}
 
void prMat(int mat[MAX][MAX], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
 
int main() {
    int mat1[MAX][MAX], mat2[MAX][MAX], mat3[MAX][MAX], tempResult[MAX][MAX], finalResult[MAX][MAX];
    int r1, c1, r2, c2, r3, c3;
 
    cout << "Enter rows and columns for the first matrix: ";
    cin >> r1 >> c1;
    inMat(mat1, r1, c1);
 
    cout << "Enter rows and columns for the second matrix: ";
    cin >> r2 >> c2;
    inMat(mat2, r2, c2);
 
    cout << "Enter rows and columns for the third matrix: ";
    cin >> r3 >> c3;
    inMat(mat3, r3, c3);
 
    if (c1 != r2 || c2 != r3) {
        cout << "Matrix multiplication is not possible with given dimensions.\n";
        return 1;
    }
 
    multiMat(mat1, mat2, tempResult, r1, c1, r2, c2);
 
    multiMat(tempResult, mat3, finalResult, r1, c2, r3, c3);
 
    cout << "Result of matrix multiplication:\n";
    prMat(finalResult, r1, c3);
 
    int transposed[MAX][MAX];
    transMat(finalResult, transposed, r1, c3);
 
    cout << "Transpose of the resulting matrix:\n";
    prMat(transposed, c3, r1);
 
    return 0;
}