#include <iostream>
#include <algorithm> 
#include <iterator> 
using namespace std;


template<typename T>
void sortArray(T arr[], int size) {
    sort(arr, arr + size);
}

int main() {
    int arr[] = { 5, 2, 9, 1, 5 };
    int size = sizeof(arr) / sizeof(int);

    cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    sortArray(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

