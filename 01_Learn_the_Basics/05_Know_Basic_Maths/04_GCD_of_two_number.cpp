# include <iostream>
using namespace std;

int main(){

    int n1,n2;
    cout << "Enter first no. : ";
    cin >> n1;
    cout << "Enter second no. : ";
    cin >> n2;

   
    int gcd = 1 ;
    // Brute force 
    // for (int i = 1 ; i <= min(n1,n2); i++){
    //     if (n1 % i == 0 && n2 % i == 0){
    //         gcd =i;
    //     }
    // }
    // cout << "Gcd of two numbers is : "<< gcd ;

    // Best Approach 
    for(int i = min(n1,n2); i > 0 ; i--){
        if (n1 % i == 0 && n2 % i == 0 ){
            gcd = i;
            break;   // we use break here because when we got our first value of i 
                    // we break because that is greatest 
        }
    }
    cout << "GCD of two numbers is : " <<gcd;
}