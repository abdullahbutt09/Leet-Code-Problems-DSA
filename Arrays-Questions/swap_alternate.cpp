#include<iostream>
using namespace std;

void swap_alternative_1(int arr[] , int size){
    int start = 0;
    int next = 1;

    while (next < size)
    {
        int temp = arr[start];
        arr[start] = arr[next];
        arr[next] = temp;

        start += 2;
        next += 2;
    }
}

void swap_alternative_2(int arr[] , int size){
    
    for (int i = 0; i < size; i+=2)
    {
        if(i + 1 < size){
            swap(arr[i] , arr[i + 1]);
        }
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
    
    int arr[] = {1,2,3,4,5};
    
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before alternate swap : ";
    printArray(arr, size);
    cout << endl;
    cout << endl;
    swap_alternative_2(arr, size);
    cout << "after alternate swap : ";
    printArray(arr, size);

    cout << endl;
    
    return 0;
}