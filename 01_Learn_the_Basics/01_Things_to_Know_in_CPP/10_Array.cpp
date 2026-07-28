// This program demonstrates basic Array operations in C++

#include <iostream>
using namespace std;
#define MAX_SIZE 100

int main(){

    int n;

    cout << "Enter the size of array : ";
    cin >> n;

    int arr[MAX_SIZE];

    // Taking Input
    cout << "Enter " << n << " elements : ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // Printing Array
    cout << "\nArray Elements : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    // Accessing Elements
    cout << "\n\nFirst Element : " << arr[0];
    cout << "\nLast Element : " << arr[n - 1];

    // Updating an Element
    arr[0] = 100;

    cout << "\n\nArray After Updating First Element : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}