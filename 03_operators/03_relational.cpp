/*
3. Relational Operators
Challenge: A tea shop offers a loyalty program.
1-Customers who buy more than 20 cups of tea get a special "Gold" badge,
2-and those who buy 10 to 20 cups get a "Silver" badge.
Write a program to display
the badge they will receive based on the number of cups they buy.
*/

#include <iostream>

using namespace std;

int main()
{
    unsigned int noOfCups;
    char doubleQuotes = '\"';
    cout << "Enter the no of cups of tea you want to buy: " << endl;
    cin >> noOfCups;

    // conditions

    if (noOfCups > 20)
    {
        cout << "Here is your "<< noOfCups << " cups of tea with a special "<< doubleQuotes << "Gold Badge"<< doubleQuotes <<  endl;
    }
    else if (noOfCups >= 10 && noOfCups <= 20)
    {
        cout << "Here is your "<< noOfCups << " cups of tea with a special "<< doubleQuotes << "Silver Badge"<< doubleQuotes <<  endl;
    }
    else if(noOfCups == 0){
        cout << "Cannot order 0 cup of tea" << endl;
    }
    else
    {
        cout << "Here is your "<< noOfCups << " cups of tea"<<  endl;
    }

    return 0;
}