// This is an example of Call by Reference Function

#include <iostream>
using namespace std;

// Function to update the values
void Update(int &n1, int &n2){

    n1 = n1 + 10;
    n2 = n2 + 10;

    cout << "Values Inside Function :" << endl;
    cout << "n1 = " << n1 << endl;
    cout << "n2 = " << n2 << endl;
}

int main(){

    int n1, n2;

    cout << "Enter 1st number : ";
    cin >> n1;

    cout << "Enter 2nd number : ";
    cin >> n2;

    Update(n1, n2);

    cout << "\nValues Inside Main Function :" << endl;
    cout << "n1 = " << n1 << endl;
    cout << "n2 = " << n2 << endl;

    return 0;
}