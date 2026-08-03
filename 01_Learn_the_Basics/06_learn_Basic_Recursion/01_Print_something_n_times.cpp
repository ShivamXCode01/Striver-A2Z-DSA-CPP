# include <iostream>
using namespace std;

// Recursion Function 
void Print(int n){
    
    // Base Condition
    if(n==0){
        return ;
    }

    cout << " Ram ";

    // Recursive call
    Print(n-1);
}


int main(){
    int n;
    cout << "Enter no. of Ram you want to print :";
    cin >> n ;

    Print(n);
}