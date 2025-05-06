#include <iostream>

using namespace std;

int main(){
    float price = 49.99;
    int roundedPrice = (int) price; // explicit type conversion from float to int

    cout << "Price of item is " << price << endl;
    cout << "Rounded price of item is " << roundedPrice << endl;
    return 0;
}

