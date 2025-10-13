#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    cout << endl;
    // int arr[] = {1, 2, 5, 1, 2, 2};
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int, int> freq; // key = number, value = count

    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;  // increase count for arr[i]
    }

    bool allUnique = true;

    for (auto pair : freq) {
        if (pair.second > 1) { // means number repeats
            allUnique = false;
            break;
        }
    }

    cout << (allUnique ? "true" : "false");

    cout << endl;

    return 0;
}