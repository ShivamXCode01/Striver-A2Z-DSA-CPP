# include <iostream>
using namespace std;

int main(){
    int n ; 
    cout << "Enter a number : ";
    cin >> n ;
    int Original = n ;
   int reverse =0;

    while (n > 0){
        int digit = n%10;
       reverse = reverse * 10 + digit;
       n /= 10;
    }
    
    if(reverse == Original){
        cout << "number is Palidrome.";
    }
    else{
        cout << "number is not Palidrome.";
    }
}