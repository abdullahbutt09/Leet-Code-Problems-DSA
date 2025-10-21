#include<iostream>
using namespace std;

bool binarySearch(int arr[], int size, int key){
   int start = 0;
   int end = size - 1;

//    int mid = (start + end) / 2;
    int mid = start + (end - start) / 2;

   while (start <= end)
   {
        if(arr[mid] == key){
            return true;
            break;
        }

        if(key > arr[mid]){
            start = mid + 1;
        }

        else {
            end = mid - 1;
        }

        // mid = (start + end) / 2;
        mid = start + (end - start) / 2;
   }

   return false;
   
}

int main(){

    cout << endl;
    // int arr[] = {1,2,4,5,6,7,9,10};
    // int arr[] = {3, 5, 12, 19, 22, 56, 78, 90};
    // int arr[] = {4, 9, 16, 18, 23, 34, 54, 95};
    // int arr[] = {2, 11, 15, 33, 45, 67, 76, 89};
    // int arr[] = {5, 14, 21, 29, 31, 44, 70, 80};
    // int arr[] = {6, 17, 24, 39, 50, 63, 77, 99};
    // int arr[] = {8, 10, 26, 32, 41, 52, 68, 85};
    // int arr[] = {7, 13, 19, 30, 38, 48, 59, 93};
    // int arr[] = {1, 12, 20, 27, 36, 47, 62, 79};
    // int arr[] = {3, 18, 22, 35, 42, 55, 64, 88};
    int arr[] = {9, 15, 28, 37, 49, 60, 71, 92};
    
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 92;
    
    bool result = binarySearch(arr, size, key);
    
    cout << (result ? "PRESENT" : "ABSENT");
    cout << endl;
    return 0;
}