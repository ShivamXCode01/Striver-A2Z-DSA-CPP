# include <iostream>
using namespace std;

int main(){
    // Using cout, we print output to the console.
    cout << "Namste Duniya!!\n";
    
    // Using endl and \n  crates a new line 
    cout << endl;


    // Using cin we can take input from the user 
    string name ;
    cout << "Enter your name :- ";
    cin >> name ;

    int age ;
    cout << "Enter Your age :- ";
    cin >> age ;

    cout << "Your name is " << name <<" and your age is " << age <<" .";


    return 0;
}