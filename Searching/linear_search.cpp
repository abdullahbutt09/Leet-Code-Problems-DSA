#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int key){

    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return i;
        }
    }

    return -1;
}

int main(){

    cout << endl;
    int arr[] = {4, 2, 7, 1, 9, 3, 6, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int key = 4;
    
    int result = linearSearch(arr, size, key);
    
    cout << "Element " << key << " is found at index: " << result << endl;
    
    return 0;
}