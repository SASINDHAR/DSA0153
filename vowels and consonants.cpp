#include <iostream>
#include <string>
#include <cctype>

void countVowelsAndConsonants(const std::string& str, int& vowelCount, int& consonantCount) {
    vowelCount = 0;
    consonantCount = 0;
    std::string vowels = "aeiouAEIOU";

    for (size_t i = 0; i < str.length(); ++i) {
        char ch = str[i];
        if (std::isalpha(static_cast<unsigned char>(ch))) {
            if (vowels.find(ch) != std::string::npos) {
                vowelCount++;
            } else {
                consonantCount++;
            }
        }
    }
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    int vowelCount = 0, consonantCount = 0;
    countVowelsAndConsonants(input, vowelCount, consonantCount);

    std::cout << "Number of vowels: " << vowelCount << std::endl;
    std::cout << "Number of consonants: " << consonantCount << std::endl;

    return 0;
}

