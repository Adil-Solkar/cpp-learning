/*
Challenge 2:
Modify Tea Prices 
Create a program where the user inputs a base price for tea.
Use type casting to increase the price 
by 10% and display the rounded new price using explicit casting.

Hint: Use both float and int types, and demonstrate type casting.
 */

// setps

// 1 - take userInput for base price of tea (float)
// 2- increase the price by 10% & display rounded value 
// (explicit type casting from float to int)

#include <iostream>

using namespace std;

int main(){
    float basePriceOfTea;
    int roundedIncreasedPrice; 
    cout << "Enter base price for tea: \n" ;
    cin >> basePriceOfTea;
    
    float tenPercentPriceIncreace = basePriceOfTea * 1.10; // 10% increase

    roundedIncreasedPrice = (int) (tenPercentPriceIncreace + 0.5); // rounding before explicit casting from float to int 
    cout << "Rounded Increased price : " << roundedIncreasedPrice << endl;  
    return 0;
}
