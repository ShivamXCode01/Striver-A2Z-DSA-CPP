// This is an example of function 

#include <iostream>
using namespace std;

// Funcations to add two numbers 
void Add(int n1 , int n2){
    cout << "Addition of two numbers is : " << n1+n2;
}

int main(){
    int n1,n2;
    cout << "Enter 1st number : ";
    cin >> n1;
    cout <<"Enter 2nd number : ";
    cin >>n2;

    Add(n1,n2);
}
