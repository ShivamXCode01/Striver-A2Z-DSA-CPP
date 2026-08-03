#include <iostream>
using namespace std;


// Recursion Function 
int factorialOfNumber(int n ){

    //base case 
    if (n==1){
        return 1 ;
    }

    return n*factorialOfNumber(n-1);
}


int main(){
    int n ;
    cout << "Enter a number : ";
    cin >> n ;

    int factorial = factorialOfNumber(n);

    cout << "Factorial of " << n << " is :" << factorial;

}