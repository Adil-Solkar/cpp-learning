#include <iostream>
#include <string>
using namespace std;

int main()
{
    string favroitetea = "Black tea.";
    string description = "Black tea is a robust and versatile tea with a wide range of flavors, often enjoyed plain or with milk, sugar, or lemon.";
    // Each escape sequence is actually just a single character
    // code under the hood — specifically, a single ASCII value.
    char newline = '\n';
    cout << favroitetea << newline << description << endl;
    cout << description.length() << endl;
    return 0;
}

// Escape sequence : https://learn.microsoft.com/en-us/cpp/cpp/string-and-character-literals-cpp?view=msvc-170
