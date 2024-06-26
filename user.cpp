#include <iostream>
#include <string>

using namespace std;

int main() {
  string str1, str2, combined_string;
  cout << "Enter the first string: ";
  getline(cin, str1);  
  cout << "Enter the second string: ";
  getline(cin, str2);
  combined_string = str1 + str2;
  cout << "The combined string is: " << combined_string << endl;
  return 0;
}

