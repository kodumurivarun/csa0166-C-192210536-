#include <iostream>

class Array {
private:
    int* arr;
    int size;

public:
    
    Array(int s) : size(s) {
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = i;  
        }
    }

    ~Array() {
        delete[] arr;
    }

    
    int& operator[](int index) {
        if (index >= 0 && index < size) {
            return arr[index];
        } else {
            std::cerr << "Index out of bounds" << std::endl;
            exit(EXIT_FAILURE);  
        }
    }

    
    void print() const {
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Array array(5);

    std::cout << "Initial array: ";
    array.print();

    array[2] = 10; 

    std::cout << "Array after modification: ";
    array.print();

    for (int i = 0; i < 5; ++i) {
        std::cout << "Element at index " << i << ": " << array[i] << std::endl;
    }


    return 0;
}

