#include <iostream>


void printArray(const int arr[], int size) {
    std::cout << "Contents of integer array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}


void printArray(const double arr[], int size) {
    std::cout << "Contents of double array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}


void printArray(const char arr[], int size) {
    std::cout << "Contents of character array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i];
    }
    std::cout << std::endl;
}

int main() {
    int intArr[] = {1, 2, 3, 4, 5};
    double doubleArr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char charArr[] = {'H', 'e', 'l', 'l', 'o'};

    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    int doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]);
    int charSize = sizeof(charArr) / sizeof(charArr[0]);

    
    printArray(intArr, intSize);

    
    printArray(doubleArr, doubleSize);

    
    printArray(charArr, charSize);

    return 0;
}

