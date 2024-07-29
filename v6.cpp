#include <iostream>
#include <vector>

class Matrix {
private:
    std::vector<std::vector<int>> mat;
    int rows;
    int cols;

public:
    
    Matrix(int r, int c) : rows(r), cols(c) {
        mat.resize(rows, std::vector<int>(cols, 0));
    }

    
    void setElement(int r, int c, int value) {
        if (r >= 0 && r < rows && c >= 0 && c < cols) {
            mat[r][c] = value;
        } else {
            std::cerr << "Index out of bounds" << std::endl;
        }
    }

    
    Matrix operator*(const Matrix& other) const {
        if (cols != other.rows) {
            std::cerr << "Matrix dimensions do not match for multiplication" << std::endl;
            exit(EXIT_FAILURE);
        }

        Matrix result(rows, other.cols);
        for

