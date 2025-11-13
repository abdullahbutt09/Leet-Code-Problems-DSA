#include<iostream>
using namespace std;

//square root using binary search

long long int square_root(int number){

    int start = 0;
    int end = number;

    long long int mid = start + (end - start) / 2;

    while (start <= end)
    {
        long long int square = mid * mid;

        if(square == number){
            return mid;
        }
        
        else if(square < number){
            start = mid + 1;
        }

        else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return end;
}

double morePrecision(int n, int precision, int tempSol){
    double factor = 1;
    double answer = tempSol;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = answer; j * j < n; j = j + factor)
        {
            answer = j;
        }
    }
    return answer;
}

int main(){ 
    
    cout << endl;
    int number = 37;

    // int result = square_root(1000000);
    int tempSolution = square_root(number);
    double preciseSolution = morePrecision(number, 3, tempSolution);

    cout << preciseSolution << endl;
    
    return 0;
}

//* added long long to handle maximum integer values to get the square root

//! try to remove long long and try to get the answer of 1000000 you will encounter invalid answer

/* 

* sqrt(1,000,000)
! mid ≈ 500,000
? mid * mid = 250,000,000,000  (which exceeds int range)

*/