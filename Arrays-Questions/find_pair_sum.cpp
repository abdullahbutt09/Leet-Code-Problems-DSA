#include<iostream>
using namespace std;
int main(){

    cout << endl;

    int arr[] = {1,2,3,4,5};
    int target = 9;
    int store_answer[1000];
    int index = 0;

    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if(arr[i] + arr[j] == target){
                store_answer[index++] = min(arr[i] , arr[j]);
                store_answer[index++] = max(arr[i] , arr[j]);
            }
        }
    }

    for (int i = 0; i < index; i++)
    {
        cout << "pair sum values are : " << store_answer[i] << " " << endl;
    }
    
    return 0;
}