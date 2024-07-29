#include <iostream>
using namespace std;

void testThrow(bool shouldThrow) throw(const char*, int) {
    if (shouldThrow) {
        throw "Error occurred"; 
    } else {
        throw 100;
    }
}

int main() {
    try {
        
        cout << "Testing throwing a const char* exception..." << endl;
        testThrow(true);
    }
    catch (const char* errorMsg) {
        cerr << "Caught const char* exception: " << errorMsg << endl;
    }
    catch (...) {
        cerr << "Caught unknown exception" << endl;
    }

    try {
        
        cout << "Testing throwing an int exception..." << endl;
        testThrow(false);
    }
    catch (int errorCode) {
        cerr << "Caught int exception: " << errorCode << endl;
    }
    catch (...) {
        cerr << "Caught unknown exception" << endl;
    }

    return 0;
}

