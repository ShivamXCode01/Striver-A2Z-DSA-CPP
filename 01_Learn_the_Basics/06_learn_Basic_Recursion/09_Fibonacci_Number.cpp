#include <iostream>
using namespace std ;

int fibonacciSeries(int n){

    // Base cases
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    // Recursive call
    return fibonacciSeries(n - 1) + fibonacciSeries(n - 2);
}

int main(){
    int n ;
    cout << "Enter a number: ";
    cin >> n ;
    
    for (int i = 0; i < n; i++) {
        cout << fibonacciSeries(i) << " ";
    }

    return 0;
}