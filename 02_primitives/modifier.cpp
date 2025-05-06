#include <iostream>

using namespace std;

int main(){
    // int positiveNumber = -1000;
    // signed positiveNumber = -1000;
    unsigned positiveNumber = -1000;

    long largeNumber = 100000000;

    cout << positiveNumber << endl;
    cout << largeNumber << endl;
    return 0;
}

/*
Type Modifiers
These modify built-in data types like int, double, float,char etc.

Modifier	Description
signed	    Allows both negative and positive values (default for int)
unsigned	Only non-negative values (expands positive range)
short	    Reduces size (e.g., short int typically uses 2 bytes)
long	    Increases size (e.g., long int, long double)
long long	Even longer than long (commonly 8 bytes)
*/
//------------------------------------------------------------------------------------

/*
Data type modifiers were introduced in C++ to provide:

Memory efficiency

Control over value ranges

Optimization opportunities

Hardware compatibility

Cross-platform predictability

They give developers more control over how data is stored and managed, allowing code to be more efficient, safe, and portable
*/

//-------------------------------------------------------------------------------------

// Read about the Data type ranges from https://learn.microsoft.com/en-us/cpp/cpp/data-type-ranges?view=msvc-170