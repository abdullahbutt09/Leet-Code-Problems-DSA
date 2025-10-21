#include<iostream>
using namespace std;

bool binarySearch(int arr[], int size, int key){
   int start = 0;
   int end = size - 1;

   int mid = (start + end) / 2;

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

        mid = (start + end) / 2;
   }

   return false;
   
}

int main(){

    cout << endl;
    // int arr[] = {1,2,4,5,6,7,9,10};
    int arr[] = {1,2,4,5,6,7,9,10,12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 12;
    
    bool result = binarySearch(arr, size, key);
    
    if(result){
        cout << "PRESENT!";
    }
    else {
        cout << "ABSENT!";
    }
    cout << endl;
    return 0;
}