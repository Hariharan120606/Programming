/* Describe a class with a parameterized constructor for getting values of row, columns of a 2 dimensional matrix. Then inside the class set the values for the matrix from the user.
[Matirx can be created dynamically or normal way ]
Then print the matrix with print(). Use operator overloading to retrieve the specific member of the matrix and print the member in the required format. Write another function for getting the diagonal sum of the matrix. Then print it. All the code should be wriiten in C++.
[Note: Must use operator overloading to retrieve the specific member, using other concepts marks will be reduced]*/

#include <iostream>

class Matrix {
private:
    int rows;
    int cols;
    int **matrix;
public:
    Matrix(int r, int c) : rows(r), cols(c) {
        matrix = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            matrix[i] = new int[cols];
        }
    }

    void setMatrix() {
        std::cout << "Enter matrix elements:" << std::endl;
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cin >> matrix[i][j];
            }
        }
    }

    void print() {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << matrix[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

    int& operator()(int r, int c) {
        return matrix[r][c];
    }

    int diagonalSum() {
        int sum = 0;
        for (int i = 0; i < rows && i < cols; ++i) {
            sum += matrix[i][i];
        }
        return sum;
    }

    ~Matrix() {
        for (int i = 0; i < rows; ++i) {
            delete[] matrix[i];
        }
        delete[] matrix;
    }
};

int main() {
    int rows, cols;
    std::cout << "Enter number of rows and columns for the matrix: ";
    std::cin >> rows >> cols;

    Matrix mat(rows, cols);
    mat.setMatrix();

    std::cout << "Matrix:" << std::endl;
    mat.print();

    std::cout << "Element at position (1, 1): " << mat(1, 1) << std::endl;

    int diagonalSum = mat.diagonalSum();
    std::cout << "Diagonal Sum: " << diagonalSum << std::endl;

    return 0;
}

