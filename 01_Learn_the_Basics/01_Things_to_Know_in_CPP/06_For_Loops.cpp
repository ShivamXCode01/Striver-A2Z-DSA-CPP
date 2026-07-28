#include <iostream>
using namespace std;

int main(){
    
    //Printing table according to user input 

    int n ;
    cout << "Enter the number for table :- ";
    cin >> n ;

    cout <<"\nTable of " << n << " is :- \n";
    for(int i = 1; i <= 10; i++){
        cout << n << " x " << i << " = " << n * i << endl;
    }

    return 0;
}