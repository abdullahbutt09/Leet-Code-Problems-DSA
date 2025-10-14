#include<iostream>
using namespace std;

int find_duplicate(int arr[] , int size){
    int answer = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                return arr[j];
            }
        }
    }
    return 0;
}

int main(){
    cout << endl;

    int arr[] = {1,2,3,4,5,6,1};
    
    int size = sizeof(arr) / sizeof(arr[0]);
    // cout << "array size : " << size << endl;

    if(find_duplicate(arr, size)){
        cout << "duplicate number is " << find_duplicate(arr, size) << endl;
    } else {
        cout << "No duplicates!" << endl;
    }

    cout << endl;
    cout << "TIME COMPLEXITY BIG(0)N^2" << endl;
        
    return 0;
}