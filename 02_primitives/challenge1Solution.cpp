/*
Challenge 1:
Tea Information Display Write a program that declares variables to store the type 
of tea, its price per kilogram (float), and its rating (char). Use data types effectively 
and print them in a formatted output using escape sequences.

Hint: Use \n for new lines and " to quote the tea name.
*/
// steps:
 // 1 - type of tea (string)
 //2 - price per kg (float)
 //3 - rating (char)
 //4 - use escape sequence and print output 

 #include <iostream>
 #include <string>
 using namespace std;

 int main(){
    string typeOfTea = "Jasmine tea";
    float pricePerKg = 49.99;
    char rating = 'B'; 
    char newLine = '\n';
    char doubleQuotes = '\"';

    cout << "Type of tea: " << doubleQuotes  << typeOfTea << doubleQuotes << newLine ;
    cout << "Price of tea per kg: " << pricePerKg << newLine ;
    cout << "Rating: " << rating << endl ;
    return 0;
 }
