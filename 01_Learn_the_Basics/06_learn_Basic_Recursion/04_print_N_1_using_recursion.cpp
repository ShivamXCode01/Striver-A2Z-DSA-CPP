# include <iostream>
using namespace std ;

void printNumbers(int n ){
    
    // Base Case 
    if (n==0)
        return ;
    
    cout << n << "  ";

    //Recursive  call
    printNumbers(n-1);
}

int main(){
    int n ;
    cout << "Enter a number : ";
    cin >> n ;

    printNumbers(n);


}