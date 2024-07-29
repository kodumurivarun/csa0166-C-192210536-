#include <iostream>
#include <cstring> 


char* concatenate(const char* str1, const char* str2) {
    char* result = new char[std::strlen(str1) + std::strlen(str2) + 1];
    std::strcpy(result, str1);
    std::strcat(result, str2);
    return result;
}


std::string concatenate(const std::string& s1, const std::string& s2) {
    return s1 + s2;
}

int main() {
    const char* charArr1 = "Hello, ";
    const char* charArr2 = "world!";
    std::string str1 = "Goodbye, ";
    std::string str2 = "friends!";

    
    char* concatenatedChars = concatenate(charArr1, charArr2);
    std::cout << "Concatenated C-style strings: " << concatenatedChars << std::endl;
    delete[] concatenatedChars; // Free allocated memory

    
    std::string concatenatedStrings = concatenate(str1, str2);
    std::cout << "Concatenated C++ strings: " << concatenatedStrings << std::endl;

    return 0;
}

