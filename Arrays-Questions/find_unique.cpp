#include<iostream>
using namespace std;

int findUnique(int arr[], int size) {
    int answer = 0;

    for (int i = 0; i < size; i++) {
        answer = answer ^ arr[i];  // XOR each element
    }

    return answer;
}

int main() {
    cout << endl;

    int arr[] = {1, 2, 3, 2, 1, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Unique element is " << findUnique(arr, size);
    cout << endl;

    return 0;
}


// ? What XOR (^) does

/* 

* XOR (^) compares each bit of two numbers:
* → If the bits are the SAME → result bit = 0
* → If the bits are DIFFERENT → result bit = 1

* You can imagine it like we’re converting every number in the array into binary form,
* and then applying XOR step by step on their bits.

* Example:
* 1 = 0001
* 2 = 0010
* ---------------
* 1 ^ 2 = 0011 → which equals 3
*
* If two numbers are the same, their XOR becomes 0:
* 3 ^ 3 = 0000 → 0
*
* So as we XOR all numbers one by one, all pairs cancel out (because a ^ a = 0),
* and the unique element remains in the end.
*
* That’s why the final output = 4 ✅

*/