#include<iostream>
using namespace std;

int pivot_in_array(int arr[], int size){
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

int main(){
    cout << endl;
    // int arr[] = {15,18,2,3,6,12};
    int arr[] = {7,8,9,10,11,12,1,2,3,4,5,6};
    // int arr[] = {1,2,3,4,5,6,0,8,9,40,53,64};

    int size = sizeof(arr) / sizeof(int);

    int pivot_index = pivot_in_array(arr, size);
    cout << "Pivot index is at: " << pivot_index << endl;
    cout << "Pivot element is: " << arr[pivot_index] << endl;

    
    return 0;
}