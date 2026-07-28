#include <iostream>
using namespace std;

int main(){

    // sum of digit entered by user
    int n ; 
    cout << "Enter a number :- ";
    cin >> n ; 

    int sum = 0 ;
    while (n > 0){
        int digit = n % 10 ;
        sum += digit ;
        n = n /10;
    }

    cout << "Sum of number is " <<sum <<" .";
}