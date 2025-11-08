#include<iostream>
using namespace std;

int PeakIndexInMountainArray(int arr[] , int size){
    int s = 0;
    int e = size - 1;

    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if(arr[mid] < arr[mid + 1]){
            s = mid + 1;
        }
        else{
            e = mid;
        }

        mid = s + (e - s) / 2;
    }
    
    return arr[mid];
}


int main(){

    cout << endl;

    // int arr[] = {1, 3, 5, 4, 2};
    // int arr[] = {2, 5, 9, 6, 3};
    // int arr[] = {0, 2, 7, 5, 1};
    // int arr[] = {4, 8, 12, 9, 6};
    // int arr[] = {3, 6, 10, 7, 2};
    int arr[] = {5, 9, 14, 10, 4};
    // int arr[] = {1, 4, 8, 5, 3};
    // int arr[] = {2, 6, 11, 8, 5};
    // int arr[] = {0, 5, 9, 6, 2};
    // int arr[] = {3, 7, 13, 8, 1};

    int size = sizeof(arr)/sizeof(arr[0]);

    int answer = PeakIndexInMountainArray(arr, size);

    cout << answer << endl;
    
    return 0;
}