#include <iostream>
using namespace std;

int main(){

    //Course selection 
    int choice;
    cout <<"><===================================================><";
    cout <<"\n1.B.Tech\n2.BCA\n3.M.Tech\n4.MCA\n5.Exit\n";
    cout << "Select your course(1-5) :- ";
    cin >> choice;

    switch(choice){
        case 1:
                cout << "You are successfully enrolled for B.Tech.";
                break;
        case 2:
                cout << "You are successfully enrolled for M.Tech.";
                break;
        case 3 :
                cout << "You are successfully enrolled for BCA.";
                break;
        case 4 :
                cout << "You are successfully enrolled for MCA.";
                break;                
        case 5:
                cout <<"You are Exiting the program.";
                break;
        default:
            cout << "Enter a Valid choice";
    }
}