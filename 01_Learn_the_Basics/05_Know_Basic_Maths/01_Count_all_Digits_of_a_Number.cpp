# include<iostream>
using namespace std ;

int main(){
    int n ;
    cout << "Enter Your number :- ";
    cin >> n;
    
    int cnt = 0 ;

    while(n >= 0){
        n = n / 10 ;
        cnt ++;
    }
    cout << "Number of digits in your number is : " << cnt;

    return 0 ;
}