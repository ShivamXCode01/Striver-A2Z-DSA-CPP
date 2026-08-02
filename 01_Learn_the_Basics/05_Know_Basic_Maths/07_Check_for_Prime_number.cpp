#include <iostream>
using namespace std;

bool PrimeChecker(int n) {

    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {

    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (PrimeChecker(n))
        cout << "Number is Prime.";
    else
        cout << "Number is Not Prime.";

    return 0;
}