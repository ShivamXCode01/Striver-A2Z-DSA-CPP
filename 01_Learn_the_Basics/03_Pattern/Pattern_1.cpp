// Pattern:- 1 We want to print 
//  *  *  *  * 
//  *  *  *  * 
//  *  *  *  * 
//  *  *  *  * 

#include <iostream>
using namespace std;

int main(){
    int n ;
    cout << "Enter the size of square pattern : ";
    cin >> n ;

    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
            cout << " * ";
            
        }
        cout << endl ;
        
    }
    return 0 ;
}