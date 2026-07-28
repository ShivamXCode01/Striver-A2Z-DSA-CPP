// This program demonstrates basic String operations in C++

#include <iostream>
using namespace std;

int main(){

    string str1, str2;

    cout << "Enter First String : ";
    getline(cin, str1);

    cout << "Enter Second String : ";
    getline(cin, str2);

    // Printing Strings
    cout << "\nFirst String  : " << str1 << endl;
    cout << "Second String : " << str2 << endl;

    // Length
    cout << "\nLength of First String : " << str1.length() << endl;
    cout << "Length of Second String : " << str2.length() << endl;

    // Concatenation
    string full = str1 + " " + str2;
    cout << "\nConcatenated String : " << full << endl;

    // Compare Strings
    if(str1 == str2){
        cout << "Both Strings are Equal." << endl;
    }
    else{
        cout << "Both Strings are Different." << endl;
    }

    // Accessing Characters
    cout << "\nFirst Character : " << str1.front() << endl;
    cout << "Last Character  : " << str1.back() << endl;

    // Append
    str1.append(" C++");
    cout << "\nAfter Append : " << str1 << endl;

    // Insert
    str1.insert(0, "Hello ");
    cout << "After Insert : " << str1 << endl;

    // Erase
    str1.erase(0, 6);
    cout << "After Erase : " << str1 << endl;

    // Replace
    str1.replace(0, 3, "ABC");
    cout << "After Replace : " << str1 << endl;

    // Substring
    cout << "Substring (0,3) : " << str1.substr(0,3) << endl;

    // Empty
    if(str1.empty()){
        cout << "String is Empty." << endl;
    }
    else{
        cout << "String is Not Empty." << endl;
    }

    return 0;
}