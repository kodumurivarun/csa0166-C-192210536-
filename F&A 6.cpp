#include <iostream>
#include <vector>
using namespace std;

pair<int, int> min_max(vector<int> arr) {
    int min_val = arr[0];
    int max_val = arr[0];
    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    return make_pair(min_val, max_val);
}

int main() {
    int arr_data[] = {1,2,3,7,9,34,18,0};
    vector<int> arr(arr_data, arr_data + sizeof(arr_data) / sizeof(arr_data[0]));
    pair<int, int> result = min_max(arr);
    cout << "Min: " << result.first << ", Max: " << result.second << endl; 
    return 0;
}

