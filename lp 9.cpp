#include <iostream>
#include <vector>
class Matrix {
private:
    std::vector<std::vector<int>> data;
    int rows;
    int cols;
public:
    Matrix(int r, int c) : rows(r), cols(c) {
        data.resize(rows, std::vector<int>(cols));
    }
    void insertElement(int row, int col, int value) {
        if (row >= 0 && row < rows && col >= 0 && col < cols) {
            data[row][col] = value;
        } else {
            std::cout << "Invalid index" << std::endl;
        }
    }
    int retrieveElement(int row, int col) const {
        if (row >= 0 && row < rows && col >= 0 && col < cols) {
            return data[row][col];
        } else {
            std::cout << "Invalid index" << std::endl;
            return -1; 
        }
    }
    void display() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << data[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
};
int main() {
    int rows, cols;
    std::cout << "Enter the number of rows: ";
    std::cin >> rows;
    std::cout << "Enter the number of columns: ";
    std::cin >> cols;
    Matrix matrix(rows, cols);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            int value;
            std::cout << "Enter element at (" << i << ", " << j << "): ";
            std::cin >> value;
            matrix.insertElement(i, j, value);
        }
    }
    std::cout << "Matrix elements:" << std::endl;
    matrix.display();
    int row, col;
    std::cout << "Enter the row and column to retrieve an element: ";
    std::cin >> row >> col;
    int retrievedValue = matrix.retrieveElement(row, col);
    if (retrievedValue != -1) { // check if the index was valid
        std::cout << "Element at (" << row << ", " << col << ") is: " << retrievedValue << std::endl;
    }
    return 0;
}
