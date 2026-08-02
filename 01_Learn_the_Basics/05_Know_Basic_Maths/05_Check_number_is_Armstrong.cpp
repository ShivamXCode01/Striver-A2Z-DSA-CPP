# include <iostream>
# include <math.h>
using namespace std;

int count_digit(int n){
    int cnt = 0 ;

    while (n > 0 ){
        n /= 10;
        cnt ++;
    }
    return cnt ;
}

int main(){
    int n ; 
    cout << "Enter a number : ";
    cin >> n ;

    int count = count_digit(n);
    int original = n ;
    int sum = 0 ;
    while(original > 0  ){
        int s = original % 10 ;
        sum += pow(s,count);
        original /= 10;
    }
    if (n == sum){
        cout << "number is Armstrong.";
    }
    else{
        cout << "Number is not Armstrong.";
    }

}