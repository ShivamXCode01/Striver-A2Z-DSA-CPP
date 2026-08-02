#include <iostream>
#include <vector>
using namespace std;

void printArray(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    vector<int> divisors;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
        }
    }

    cout << "Divisors of the number are: ";
    printArray(divisors);

    return 0;
}