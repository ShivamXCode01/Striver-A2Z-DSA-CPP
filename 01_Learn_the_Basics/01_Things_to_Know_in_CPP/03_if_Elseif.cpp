#include <iostream>
using namespace std;

int main(){

    // Vote Validation

    int age;

    cout << "Enter Your Age : ";
    cin >> age;

    if(age < 0 || age > 140){
        cout << "Enter a valid age.";
    }
    else if(age >= 18){
        cout << "You are eligible for voting.";
    }
    else{
        cout << "You are not eligible for voting.";
    }

    return 0;
}