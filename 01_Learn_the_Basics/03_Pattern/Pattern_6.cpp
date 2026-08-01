// Pattern:- 6 We want to print
//  1  2  3  4  5 
//  2  3  4  5 
//  3  4  5 
//  4  5 
//  5 
# include <iostream>
using namespace std;

int main (){

    int n ;
    cout << "Enter the height : ";
    cin >> n ;
    
    for (int i = 1 ; i <= n ;i++){
        for (int j = n ; j >= i ;j--){
            cout <<" " <<n-j+i<<" ";
        }
        cout << endl;
    }
}