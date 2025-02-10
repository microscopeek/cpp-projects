#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

void displayWelcomeScreen() {
    cout << "****************************************************\n";
    cout << "*                                                  *\n";
    cout << "*        WELCOME TO THE MATRIX CALCULATOR          *\n";
    cout << "*                                                  *\n";
    cout << "*    Perform Matrix Addition, Subtraction,         *\n";
    cout << "*    Multiplication, Determinant Calculation!      *\n";
    cout << "*                                                  *\n";
    cout << "*                                                  *\n";
    cout << "****************************************************\n";
}

void inputMatrix(double matrix[10][10], int rows, int cols, string name) {
    cout << "Enter values for " << name << ":\n";
    for (int i = 0; i < rows; ++i) {   // looping though rows
        for (int j = 0; j < cols; ++j) { // looping though cols
            cout << name << "[" << i + 1 << "][" << j + 1 << "] = ";
            cin >> matrix[i][j];
        }
    }
    cout << "\nMatrix " << name << ":\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << setw(10) << matrix[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

void displayMatrix(double matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << setw(10) << matrix[i][j];
        }
        cout << endl;
    }
}

void addMatrices(double a[10][10], double b[10][10], double result[10][10], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void subtractMatrices(double a[10][10], double b[10][10], double result[10][10], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = a[i][j] - b[i][j];
        }
    }
}

void multiplyMatrices(double a[10][10], double b[10][10], double result[10][10], int r1, int c1, int c2) {
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < c1; ++k) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

double determinant(double matrix[10][10], int n) {
    double det = 0;
    if (n == 1) {
        return matrix[0][0];
    } else if (n == 2) {
        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    } else {
        double temp[10][10];
        int sign = 1;
        for (int f = 0; f < n; f++) {
            int subi = 0;
            for (int i = 1; i < n; i++) {
                int subj = 0;
                for (int j = 0; j < n; j++) {
                    if (j == f) continue;
                    temp[subi][subj] = matrix[i][j];
                    subj++;
                }
                subi++;
            }
            det += sign * matrix[0][f] * determinant(temp, n - 1);
            sign = -sign;
        }
    }
    return det;
}

void randomMatrix(double matrix[10][10], int rows, int cols) {
    srand(time(0));
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = rand() % 100;
        }
    }
}

int main() {
    double a[10][10], b[10][10], result[10][10];
    int rows, cols, r2, c2, choice;

    displayWelcomeScreen();

    do {
        cout << "\nChoose an operation:" << endl;
        cout << "1. Add Matrices" << endl;
        cout << "2. Subtract Matrices" << endl;
        cout << "3. Multiply Matrices" << endl;
        cout << "4. Find Determinant" << endl;
        cout << "5. Generate Random Matrix" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
        case 2:
            cout << "Enter rows and columns for matrices: ";
            cin >> rows >> cols;
            inputMatrix(a, rows, cols, "Matrix A");
            inputMatrix(b, rows, cols, "Matrix B");
            if (choice == 1) {
                addMatrices(a, b, result, rows, cols);
                cout << "Sum of matrices:" << endl;
            } else {
                subtractMatrices(a, b, result, rows, cols);
                cout << "Difference of matrices:" << endl;
            }
            displayMatrix(result, rows, cols);
            break;

        case 3:
            cout << "Enter rows and columns for first matrix: ";
            cin >> rows >> cols;
            cout << "Enter rows and columns for second matrix: ";
            cin >> r2 >> c2;
            if (cols != r2) {
                cout << "Matrix multiplication not possible. Column of first matrix must equal row of second matrix." << endl;
            } else {
                inputMatrix(a, rows, cols, "Matrix A");
                inputMatrix(b, r2, c2, "Matrix B");
                multiplyMatrices(a, b, result, rows, cols, c2);
                cout << "Product of matrices:" << endl;
                displayMatrix(result, rows, c2);
            }
            break;

        case 4:
            cout << "Enter size of square matrix (n x n): ";
            cin >> rows;
            inputMatrix(a, rows, rows, "Matrix A");
            cout << "Determinant: " << determinant(a, rows) << endl;
            break;

        case 5:
            cout << "Enter rows and columns for random matrix: ";
            cin >> rows >> cols;
            randomMatrix(a, rows, cols);
            cout << "Randomly generated matrix:" << endl;
            displayMatrix(a, rows, cols);
            break;

        case 6:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 6);
}
