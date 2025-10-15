#include<iostream>
using namespace std;

void zero_to_one(int arr[], int size){
    int left = 0;
    int right = size - 1;
    
    while (left < right)
    {
        if(arr[left] == 0){
            left++;
        }

        else if(arr[right] == 1){
            right--;
        }

        swap(arr[left], arr[right]);
    }
}

void one_to_zero(int arr[], int size){
    int left = 0;
    int right = size - 1;

    while (left < right)
    {
        if(arr[left] == 1){
            left++;
        }
        else if(arr[right] == 0){
            right--;
        }

        swap(arr[left] , arr[right]);
    }
}

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){
    cout << endl;
    
    int arr[] = {0,1,0,1,0,1,1,1,1,0,1,0,0,1,1,0,0,0,0,1,1,1};
    
    int size = sizeof(arr) / sizeof(arr[0]);

    zero_to_one(arr, size);
    one_to_zero(arr, size);
    printArray(arr, size);
    
    cout << endl;
    return 0;
}

//! imp question