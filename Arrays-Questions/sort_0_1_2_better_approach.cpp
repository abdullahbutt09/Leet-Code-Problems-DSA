#include <iostream>
using namespace std;

int main() {

    cout << endl;

    // ! TEST CASES
    // int arr[] = {0,1,2}; // ok
    // int arr[] = {2,1,0}; // not ok
    // int arr[] = {0,1,2,0,1,2}; // ok
    // int arr[] = {2,2,1,0,0,1}; // ok
    // int arr[] = {2,0,1,2,0,1}; // ok
    // int arr[] = {1,2,0,2,1,0,1,0}; // ok
    int arr[] = {0,2,1,1,0,2,2,0,1}; // ok
    // int arr[] = {1,0,2,1,0,1,1,0,2,0,2}; // ok
    
    int size = sizeof(arr) / sizeof(arr[0]);

    int low = 0, mid = 0, high = size - 1;

    while (mid <= high) {
        switch (arr[mid]) 
        {
            case 0:
                swap(arr[low++], arr[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid], arr[high--]);
                break;
        }
    }

    // Output
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "END!";
    cout << endl;
    return 0;
}