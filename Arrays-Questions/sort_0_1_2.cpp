#include<iostream>
using namespace std;
int main(){
    cout << endl;

    // ! TEST CASES
    // int arr[] = {0,1,2};
    // int arr[] = {2,1,0};
    // int arr[] = {0,1,2,0,1,2}; // ok
    // int arr[] = {2,2,1,0,0,1};
    // int arr[] = {2,0,1,2,0,1};
    // int arr[] = {1,2,0,2,1,0,1,0}; // ok
    // int arr[] = {0,2,1,1,0,2,2,0,1};
    int arr[] = {1,0,2,1,0,1,1,0,2,0,2}; // ok

    int size = sizeof(arr) / sizeof(arr[0]);
    
    int left = 0;
    int right = size - 1;
    int middle = (size / 2) - 1;

    while (left < right && middle < right)
    {
        if(arr[left] == 0 && middle < right){
            left++;
        }

        else if(arr[right] == 2 && middle < right){
            right--;
        }

        else if(arr[middle] == 1 && middle < right){
            middle++;
        }

        if(arr[middle] == 0 && middle < right){
            swap(arr[middle] , arr[left]);
        } 

        else if(arr[middle] == 2 && middle < right){
            swap(arr[middle] , arr[right]);
        } 
        
        else {
            swap(arr[right], arr[left]);
        }

    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << "END!";
    cout << endl;
    return 0;
}