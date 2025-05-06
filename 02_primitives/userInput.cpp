#include <iostream>
#include <string>

using namespace std;

int main(){
    string userTea;
    int teaQuantity;

    cout << "What type of tea would you like? \n";
    getline(cin,userTea);

    // ask for quantity
     cout << "How many " << userTea << " tea would you like to have? \n";
     cin >>  teaQuantity ;

     cout << "Order: " << teaQuantity << " " << userTea << " tea" << endl;
    return 0;
}