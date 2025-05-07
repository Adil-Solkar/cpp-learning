// Challenge 3:
//Favorite Tea Input Write a program that takes 
//the user’s favorite tea as input using getline and also asks
// how many cups of tea they want using cin. 
//Display the result in a fun message.

// Hint: Combine cin and getline carefully to avoid input issues.

#include <iostream>
#include <string>
using namespace std;

int main(){
    string favTea;
    int noOfCups;

    cout << "Enter your favorite tea: "<< endl; 
    getline(cin,favTea);
    cout << "Number of cups you want: " << endl;
    cin >> noOfCups;

    cout << "Here are " << noOfCups << " cups of your " << favTea <<" tea. Enjoy!"<< endl;
    return 0;
}