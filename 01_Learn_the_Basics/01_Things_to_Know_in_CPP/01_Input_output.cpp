#include <iostream>
using namespace std;

int main() {

    // Using cout, we print output to the console.
    cout << "Namaste Duniya!!\n";

    // Using '\n' creates a new line.
    cout << '\n';

    // Using cin, we take input from the user.
    string name;
    cout << "Enter your name: ";
    cin >> name;

    int age;
    cout << "Enter your age: ";
    cin >> age;

    cout << "\nYour name is " << name
         << " and your age is " << age << ".";

    return 0;
}