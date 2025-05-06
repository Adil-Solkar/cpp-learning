#include <iostream>

using namespace std;

int main(){
    int teaLeaves = 50;
    float waterTemp = 85.64215446165486; // Precision of 7 significant digits	
    double priceOftea = 99.999524151541; // Precision of 15–16 significant digits
    char teaGrade = 'B';
    bool isTeaReady = false;

    cout << "Number of tea leaves " << teaLeaves << endl;
    cout << waterTemp << endl;
    cout << priceOftea << endl;
    cout << teaGrade << endl;
    cout << isTeaReady << endl;

    return 0;
}