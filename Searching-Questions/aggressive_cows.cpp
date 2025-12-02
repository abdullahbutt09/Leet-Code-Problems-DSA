#include<iostream>
using namespace std;

bool isPossible(int stalls[], int c, int mid, int n)
{
    int cowCount = 1;
    int lastPosition = stalls[0];

    for (int i = 0; i < n; i++)
    {
        if(stalls[i] - lastPosition >= mid)
        {
            cowCount++;
            if(cowCount == c)
            {
                return true;
            }

            lastPosition = stalls[i];
        }
    }
    
    return false;
}

int aggressive_cows(int stalls[], int n, int c)
{
    int start = 0;
    int maxi = -1;

    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, stalls[i]);
    }

    int end = maxi;

    int mid = start + (end - start) / 2;
    int answer = -1;

    while (start <= end)
    {
        if(isPossible(stalls, c, mid, n))
        {
            answer = mid;
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    
    return answer;
}


int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr) / sizeof(arr[0]);

    aggressive_cows(arr, size, 2);
    
    return 0;
}