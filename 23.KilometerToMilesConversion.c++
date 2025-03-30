/* 23. Problem- Kilometers to Miles Conversion

Write a program in C++ that converts kilometers per hour to miles per hour.
Sample Output:
Convert kilometers per hour to miles per hour :
----------------------------------------------------
Input the distance in kilometer : 25
The 25 Km./hr. means 15.5343 Miles/hr.
Developed by Jyotirmoy */
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    cout << "Convert Kilometer per hour to miles per hour" << endl;
    cout << "----------------------------------------------------" << endl;
    double km, mi;
    cout << "Input the distance in kilometer : ";
    cin >> km;
    mi= km * 0.621372;
    cout<< fixed << setprecision(4) << mi;
}