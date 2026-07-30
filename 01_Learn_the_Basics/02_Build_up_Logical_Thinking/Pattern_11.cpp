// Pattern:-11 We want to print
// 1
// 01
// 101
// 0101
// 10101
# include <iostream>
using namespace std;

int main (){

    int n ;
    cout << "Enter the height : ";
    cin >> n ;
    
  /// Brute Force But Unsuccessfull
//    for (int i = 0 ; i < n ; i++){            
//         for (int j = 0 ; j <= i;j++){
//             if (i==j){
//                 cout <<" 1 ";
//             }
//             else if(i>j && i %2 != 0){
//                 cout <<" 0 ";
//             }
//             else if(i%2 == 0){
//                 cout << " 1 ";
//             }
//         }
//         cout <<endl;
//    }

        int start = 1;
        for (int i = 0 ; i < n ; i++){
            if (i%2==0){
                start = 1 ;
            }
            else{
                start = 0 ;
            }
            for (int j = 0 ; j <= i ; j++){
                cout << start;
                start=1-start;
            }
            cout <<endl;
        }
    return 0 ;
}