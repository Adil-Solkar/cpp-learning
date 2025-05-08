/*
Arithmetic Operators
Challenge: Create a program that calculates the total price of tea cups.
1 - The user inputs the number of cups they want and the price per cup.
2 - The program should calculate the total price, 
3 - apply a 5% discount if the total is above a certain amount, and show the final price.
*/

#include <iostream>

using namespace std;

int main(){
    int numberOfCups;
    double pricePerCup,totalPrice,discountedPrice;
    
    // take input from user
    cout << "Enter the number of tea cups you want : " << endl;
    cin >> numberOfCups;
    cout << "Enter the price of tea per cup: " << endl;
    cin >> pricePerCup;

    // calculate total price
    totalPrice = numberOfCups * pricePerCup;
    
    // apply 5 percent off of total price if it is greater than 50
    if(totalPrice > 50){
        discountedPrice = totalPrice - (totalPrice * 0.05);
        cout << "Discounted price: "<< discountedPrice << endl;
    }
    else{
        cout << "Total price: "<< totalPrice << endl;
    }
    
    return 0;
}