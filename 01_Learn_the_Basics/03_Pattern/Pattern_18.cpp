// Pattern:- 18 We want to print
//  E
//  D E
//  C D E
//  B C D E
//  A B C D E

#include <iostream>
using namespace std;

int main(){

     int n ;
    cout << "Enter the height : ";
    cin >> n ;

    for (int i = 0 ; i < n ; i++){
        for (int j = i ; j >= 0 ; j--){
            cout <<" "<<char('A'+ (n-j-1));
        }
        cout <<endl;
    }

}