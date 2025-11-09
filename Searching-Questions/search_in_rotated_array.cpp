#include<iostream>
using namespace std;

int get_pivot(int arr[], int size){
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2; //! To avoid integer overflow

    while (start < end)
    {
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }

        mid = start + (end - start) / 2; //! To avoid integer overflow
    }

    return start;
}

int binarySearch(int arr[], int size, int key){
   int start = 0;
   int end = size - 1;

    // int mid = (start + end) / 2;
    int mid = start + (end - start) / 2; //! To avoid integer overflow

   while (start <= end)
   {
        if(arr[mid] == key){
            return mid;
            break;
        }

        if(key > arr[mid]){
            start = mid + 1;
        }

        else {
            end = mid - 1;
        }

        // mid = (start + end) / 2;
        mid = start + (end - start) / 2; //! To avoid integer overflow
   }

   return -1;

}

int main(){
    cout << endl;
    // int arr[] = {15,18,2,3,6,12};
    int arr[] = {7,8,9,10,11,12,1,2,3,4,5,6};
    int key = 3;
    // int arr[] = {1,2,3,4,5,6,0,8,9,40,53,64};

    int size = sizeof(arr) / sizeof(int);

    int pivot = get_pivot(arr, size);

    if(key >= arr[pivot] && key <= arr[size - 1]){
        // Search in the second half
        int result = binarySearch(arr + pivot, size - pivot, key);
        if(result != -1){
            cout << "Element found at index: " << result + pivot << endl;
        }
        else{
            cout << "Element not found" << endl;
        }
    }
    else{
        // Search in the first half
        int result = binarySearch(arr, pivot, key);
        if(result != -1){
            cout << "Element found at index: " << result << endl;
        }
        else{
            cout << "Element not found" << endl;
        }
    }

    
    return 0;
}