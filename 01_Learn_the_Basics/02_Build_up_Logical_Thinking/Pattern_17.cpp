// Pattern:- 17 We want to print
//  A B C D E
//  A B C D
//  A B C
//  A B
//  A

#include <iostream>
using namespace std;

int main(){

     int N ;
    cout << "Enter the height : ";
    cin >> N ;

    for (int i = 0; i < N; i++) {

        // Print leading spaces
        for (int j = 0; j < N - i - 1; j++) {
            cout << " ";
        }

        // Initialize character to start from 'A'
        char ch = 'A';

        // Calculate midpoint of the row
        int breakpoint = (2 * i + 1) / 2;

        // Print the characters in the row
        for (int j = 1; j <= 2 * i + 1; j++) {
            cout << ch;

            // Increment character till the midpoint, then decrement
            if (j <= breakpoint) ch++;
            else ch--;
        }

        // Print trailing spaces
        for (int j = 0; j < N - i - 1; j++) {
            cout << " ";
        }

        // Newline after each row
        cout << endl;
    }
    

}