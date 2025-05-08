/*
2. Assignment Operators
Challenge: Write a program that
1- allows a user to input the number of tea bags they have.
2- Assign additional bags to them based on certain conditions 
(e.g., if they have fewer than 10 bags, give them 5 extra).
3- Update the original number using assignment operators.
*/

#include <iostream>

using namespace std;

int main(){
    unsigned int noOfTeaBags;

    // take userInput
    cout << "Enter the number of tea bags you have: " <<endl;
    cin >> noOfTeaBags;
    
    // condition if true add 5 extra tea bags
    if(noOfTeaBags < 10){
        noOfTeaBags += 5;
        cout << "Total number of Tea bags you have is: " << noOfTeaBags << endl;
    }
    else{
        cout << "Total number of Tea bags you have is: " << noOfTeaBags << endl;
    }
    return 0;
}