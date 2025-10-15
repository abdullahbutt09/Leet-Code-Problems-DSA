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

void find_all_duplicates(int arr[] , int size){
    
    int index = 0;
    int store_duplicates[1000];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                store_duplicates[index] = arr[j];
                ++index;
            }
        }
    }

    for (int i = 0; i < index; i++)
    {
        cout << "The duplicate numbers are : " << store_duplicates[i] << " " << endl;
    }
}

int main(){
    cout << endl;

    int arr[] = {11,12,13,14,15,14,15,12};
    
    int size = sizeof(arr) / sizeof(arr[0]);
    find_all_duplicates(arr , size);
        
    return 0;
}