#include <iostream>
#include <string>
#include <cctype> 


bool isPalindrome(const std::string& str) {
   
    int left = 0;
    int right = str.length() - 1;

    
    while (left < right) {
        
        while (left < right && !std::isalnum(str[left])) {
            ++left;
        }
    
        while (left < right && !std::isalnum(str[right])) {
            --right;
        }
        
        char leftChar = std::tolower(str[left]);
        char rightChar = std::tolower(str[right]);

        
        if (leftChar != rightChar) {
            return false;
        }

        
        ++left;
        --right;
    }

    
    return true;
}

int main() {
    std::string inputString;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    
    if (isPalindrome(inputString)) {
        std::cout << "\"" << inputString << "\" is a palindrome." << std::endl;
    } else {
        std::cout << "\"" << inputString << "\" is not a palindrome." << std::endl;
    }

    return 0;
}

