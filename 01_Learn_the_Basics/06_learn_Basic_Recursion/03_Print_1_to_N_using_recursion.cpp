# include <iostream>
using namespace std ;

void printNumbers(int current ,int n ){
    
    // Base Case 
    if (current > n)
        return ;
    
    cout << current << "  ";

    //Recursive  call
    printNumbers(current+1,n);
}

int main(){
    int n ;
    cout << "Enter a number : ";
    cin >> n ;

    printNumbers(1,n);


}