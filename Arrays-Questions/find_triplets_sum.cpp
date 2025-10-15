#include<iostream>
using namespace std;
int main(){

    cout << endl;

    int arr[] = {1,2,3,4,5};
    int target = 12;
    int store_answer[1000];
    int index = 0;

    int size = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if(arr[i] + arr[j] + arr[k] == target)
                {
                    store_answer[index++] = arr[i];
                    store_answer[index++] = arr[j];
                    store_answer[index++] = arr[k];
                }
            }
        }
    }

    for (int i = 0; i < index; i++)
    {
        cout << "pair sum values are : " << store_answer[i] << " " << endl;
    }
    
    return 0;
}

//? optimize solution dhondna ha

// ! QUESTION IS SIMILAR TO PAIR SUM;