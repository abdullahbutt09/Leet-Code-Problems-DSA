#include<iostream>
using namespace std;

void intersection_unoptimized(int arr1[], int arr2[], int size_arr_1, int size_arr_2){

    for (int i = 0; i < size_arr_1; i++)
    {
        int element = arr1[i];
        for (int j = 0; j < size_arr_2; j++)
        {
            if(element < arr2[j])
            break;

            if(element == arr2[j])
            {
                cout << "The intersection element is " << arr1[i] << endl;
                arr2[j] = INT_MIN;
                break;
            }
        }
    }
}

void intersection_optimized(int arr1[], int arr2[], int size_arr_1, int size_arr_2){

    int i, j = 0;

    while (i < size_arr_1 && j < size_arr_2)
    {
        if(arr1[i] == arr2[j])
        {
            cout << "intersection element is : " << arr2[j] << endl;
            i++;
            j++;
        } 

        else if(arr1[i] < arr2[j])
        {
            i++;
        } 
        
        else 
        {
            j++;
        }
    }
}

int main(){
    cout << endl;

    int arr1[] = {1,2,3,4};
    int arr2[] = {2,6,7,8};

    int size_arr_1 = sizeof(arr1) / sizeof(arr1[0]);
    int size_arr_2 = sizeof(arr2) / sizeof(arr2[0]);

    // intersection_unoptimized(arr1, arr2, size_arr_1, size_arr_2);
    intersection_optimized(arr1, arr2, size_arr_1, size_arr_2);
    
    return 0;
}

/*

* its not about optimize un-optimize its about the condition like the optimize 1 is good for sorted arrays and the un-optimize 1 is good for unsorted arrays so it always condition we build solutions with our brain according to the best scenario or condition!

🧠 == ☕

*/