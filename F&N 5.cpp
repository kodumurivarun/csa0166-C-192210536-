#include <iostream>
#include <string>
#include <sstream> 


int countWords(const std::string& str) {
    std::istringstream iss(str); 
    std::string word;
    int wordCount = 0;

    
    while (iss >> word) {
        wordCount++;
    }

    return wordCount;
}

int main() {
    std::string inputString;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    int numWords = countWords(inputString);
    std::cout << "Number of words in the string: " << numWords << std::endl;

    return 0;
}

