# include <iostream>
using namespace std ;

//Recursion function
int sumOfNaturalNumbers(int n ){

    if (n==0){
        return 0 ;
    }
    return n +sumOfNaturalNumbers(n-1);
}

int main(){
    int n ;
    cout << "Enter a number : ";
    cin >> n ;

    int sum = sumOfNaturalNumbers(n);

    cout << "Sum of first "<<n<<" is : "<<sum ;




}