// Pattern:- 16 We want to print
//  A
//  B B
//  C C C
//  D D D D
//  E E E E E

#include <iostream>
using namespace std;

int main(){

     int n ;
    cout << "Enter the height : ";
    cin >> n ;

    for (int i = 0 ; i < n ; i++){
        for (int j =0 ; j <=i ; j++){
            
            cout <<" "<<char('A'+i);
        }
        cout << endl;
    }

}