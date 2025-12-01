#include<iostream>

using namespace std;

bool isPossible(int arr[], int n, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];   
        }

        else
        {
            studentCount++;

            if(studentCount > m || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;    
}

int allocateBooks(int arr[], int n, int m)
{
    int start = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int end = sum;
    int mid = start + (end - start) / 2;
    int answer = -1;

    while (start <= end)
    {
        if(isPossible(arr, n, m, mid))
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
    int arr[] = {10, 20, 30, 40};
    int size = sizeof(arr) / sizeof(arr[0]);

    int answer = allocateBooks(arr, size, 2);
    cout << answer << endl;
    
    return 0;
}