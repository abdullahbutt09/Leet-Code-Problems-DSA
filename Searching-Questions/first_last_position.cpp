#include<iostream>
using namespace std;

int first_position(int arr[], int size, int key){
   int start = 0;
   int end = size - 1;

   int mid = start + (end - start) / 2; //! To avoid integer overflow
   int answer = -1;

   while (start <= end)
   {
        if(arr[mid] == key){
            answer = mid;
            end = mid - 1;
        }

        if(key > arr[mid]){
            start = mid + 1;
        }

        else {
            end = mid - 1;
        }

        // mid = (start + end) / 2;
        mid = start + (end - start) / 2; //! To avoid integer overflow
   }

   return answer;
}

int last_position(int arr[], int size, int key){
   int start = 0;
   int end = size - 1;

   int mid = start + (end - start) / 2; //! To avoid integer overflow
   int answer = -1;

   while (start <= end)
   {
        if(arr[mid] == key){
            answer = mid;
            start = mid + 1;
        }

        if(key > arr[mid]){
            start = mid + 1;
        }

        else {
            end = mid - 1;
        }

        // mid = (start + end) / 2;
        mid = start + (end - start) / 2; //! To avoid integer overflow
   }

   return answer;
}

int main(){

    // first and last postion of an element in a sorted array


    cout << endl;
    // int arr[] = {1,2,3,4,4,5,6,8,9,10};
    int arr[] = {1,2,3,3,3,3,5};
    
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 3;

    int Left_Most_Position = first_position(arr, size, key);
    int Right_Most_Position = last_position(arr, size, key);

    cout << "first position of " << key << " is at index: " << Left_Most_Position << endl;
    cout << "last position of " << key << " is at index: " << Right_Most_Position << endl;

    return 0;
}

// * Time Complexity: O(log n)