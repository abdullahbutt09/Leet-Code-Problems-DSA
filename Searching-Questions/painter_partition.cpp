#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int k, int mid){
    int paintersCount = 1;
    int boardsSum = 0;

    for (int i = 0; i < n; i++)
    {
        if(boardsSum + arr[i] <= mid)
        {
            boardsSum += arr[i];
        }

        else
        {
            paintersCount++;

            if(paintersCount > k || arr[i] > mid)
            {
                return false;
            }
            boardsSum = arr[i];
        }
    }
    return true;
}

int allocatePainters(int arr[], int n, int k){

    int start = 0;
    int sum = 0;
    
    int answer = -1;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int end = sum;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if(isPossible(arr, n, k, mid))
        {
            answer = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }

    return answer;
}

int main(){

    cout << endl;
    int arr[] = {5,5,5,5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int totalPainters = 2;

    int result = allocatePainters(arr, size, totalPainters);
    cout << result << endl;

    return 0;
}