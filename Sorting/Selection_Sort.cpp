#include<iostream>
using namespace std;

void SelectionSort(int arr[], int size){
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for(int j = i + 1; j < size; j++)
        {
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(){

    //simple test cases
    // int arr[] = {5, 2, 0, 1, 4};
    // int arr[] = {9, 3, 7, 1, 6};
    // int arr[] = {8, 3, 9, 2, 7, 1};
    // int arr[] = {20, 18, 22, 19, 21};
    int arr[] = {6, 10, 2, 9, 3, 8};

    // more complex test cases
    // int arr[] = {42, 17, 8, 99, 23, 56, 17, 0, -5, 8};
    // int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    // int arr[] = {100, -100, 50, -50, 25, -25, 0, 75, -75, 10};
    // int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    // int arr[] = {214, 7, 7, 7, 999, -42, 0, 214, 3, -999};


    int size = sizeof(arr) / sizeof(arr[0]);

    SelectionSort(arr, size);
    printArray(arr, size);
    
    return 0;
}