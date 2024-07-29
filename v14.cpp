#include <iostream>

const int MAX_SIZE = 100; 


void sumMatrix(const int mat1[][MAX_SIZE], const int mat2[][MAX_SIZE], int rows, int cols) {
    int result[MAX_SIZE][MAX_SIZE];

    
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    
    std::cout << "Sum of matrices:" << std::endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }
}


void sumArray(const int arr1[], const int arr2[], int size) {
    int result[MAX_SIZE];

    
    for (int i = 0; i < size; ++i) {
        result[i] = arr1[i] + arr2[i];
    }

    
    std::cout << "Sum of arrays:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int mat1[][MAX_SIZE] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat2[][MAX_SIZE] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int rows = 3;
    int cols = 3;
    int size = 5;

    
    sumMatrix(mat1, mat2, rows, cols);

    
    sumArray(arr1, arr2, size);

    return 0;
}

