// Pattern:- 15 We want to print
//  A B C D E
//  A B C D
//  A B C
//  A B
//  A

#include <iostream>
using namespace std;

int main(){

     int n ;
    cout << "Enter the height : ";
    cin >> n ;

    for (int i = 0 ; i < n ; i++){
        for (int j = n ; j > i ; j--){
            
            cout <<" "<<char('A'+n-j);
        }
        cout << endl;
    }

}