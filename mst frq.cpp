#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int findMostFrequentElement(const vector<int>& arr) {

    unordered_map<int, int> frequencyMap;

    for (int num : arr) {
        frequencyMap[num]++;
    }

    int mostFrequentElement = arr[0];
    int maxFrequency = 0;

    for (const auto& pair : frequencyMap) {
        if (pair.second > maxFrequency) {
            maxFrequency = pair.second;
            mostFrequentElement = pair.first;
        }
    }

    return mostFrequentElement;
}

int main() {
   
    vector<int> arr = {1, 3, 2, 3, 4, 3, 5, 1, 2, 1};
    int mostFrequentElement = findMostFrequentElement(arr);
    cout << "The most frequent element is: " << mostFrequentElement << endl;

    return 0;
}

