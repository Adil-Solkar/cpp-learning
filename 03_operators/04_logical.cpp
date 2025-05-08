/*4. Logical Operators
Challenge: 
Create a program that checks if a user is eligible for a tea subscription discount. 
The discount applies if the user is either a student or has purchased more than 15 cups.
Ask the user to input their status (student or not) and their cup count.
*/

#include <iostream>

using namespace std;

int main(){
    bool isStudent;
    unsigned int noOfCupsPurchased;

    // user Input
    cout << "Are you a student? (if YES submit 1, else submit 0): ";
    cin >> isStudent;
    cout << "Enter the no of tea cups you want to purchase: ";
    cin >> noOfCupsPurchased;
    
    // conditions and output
    if(isStudent || noOfCupsPurchased > 15){
        cout << "You are Eligible for a Discount" << endl;
    }
    else{
        cout << "You are ineligible for a Discount" << endl;
    }
    return 0;
}