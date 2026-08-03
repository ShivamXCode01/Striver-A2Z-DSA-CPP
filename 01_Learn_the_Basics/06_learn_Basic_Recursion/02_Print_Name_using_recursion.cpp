# include <iostream>
using namespace std;

// Recursion Function 
void printName(string name ,int n){
    
    // Base Condition
    if(n==0){
        return ;
    }

    cout << name<<"  ";

    // Recursive call
    printName(name,n-1);
}


int main(){
    string name ;
    cout << "Enter your name: ";
    cin >> name;
    int n;
    cout << "Enter no. of times name you want to print :";
    cin >> n ;

    // Calling the recursion fn in the main fn
    printName(name , n);
}