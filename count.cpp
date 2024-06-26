#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int countWords(const string& str) {
    stringstream ss(str); 
    string word;
    int count = 0;

    while (ss >> word) { 
        ++count;
    }

    return count;
}

int main() {
    string input;

    cout << "Enter a string: ";
    getline(cin, input);

   
    int wordCount = countWords(input);

    cout << "The number of words in the given string is: " << wordCount << endl;

    return 0;
}

