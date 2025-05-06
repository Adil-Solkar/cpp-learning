#include <iostream>

using namespace std;

int main(){
    int balance; // Declare an integer variable named 'balance'
    balance = 500; // Assign the value 500 to the 'balance' variable

    // Declared a constant integer named 'age' with value 100 (cannot be changed)
    const int age = 100;
    
    cout << "learning about variables and constants in cpp";
    return 0;
}

/*
Identifiers in C++
Identifiers are names used to label variables, functions, classes, etc.
In above example balance and age are Identifiers.

They must start with a letter or underscore, and can contain letters, digits, and underscores.

They are case-sensitive (Score ≠ score).

Reserved keywords like int, class, return cannot be used as identifiers.

Naming conventions:

Variables/functions: camelCase (e.g., userAge)

Classes: PascalCase (e.g., StudentRecord)

Constants: ALL_CAPS (e.g., MAX_SIZE) 
*/