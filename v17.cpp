#include <iostream>
#include <algorithm> 
#include <iomanip>   


void sortArray(int arr[], int size) {
    std::sort(arr, arr + size);
}


void sortArray(double arr[], int size) {
    std::sort(arr, arr + size);
}


void printIntArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}


void printDoubleArray(const double arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << std::fixed << std::setprecision(2) << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int intArr[] = {5, 2, 8, 1, 3};
    double doubleArr[] = {3.5, 1.2, 6.7, 2.3, 5.1};
    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    int doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]);

    
    std::cout << "Original integer array: ";
    printIntArray(intArr, intSize);
    sortArray(intArr, intSize);
    std::cout << "Sorted integer array: ";
    printIntArray(intArr, intSize);


    std::cout << "\nOriginal double array: ";
    printDoubleArray(doubleArr, doubleSize);
    sortArray(doubleArr, doubleSize);
    std::cout << "Sorted double array: ";
    printDoubleArray(doubleArr, doubleSize);

    return 0;
}

