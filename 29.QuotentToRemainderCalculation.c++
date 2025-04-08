/*29. Problem- Quotient and Remainder Calculation

Write a C++ program to compute the quotient and remainder.

Sample Output:
Compute quotient and remainder :
-------------------------------------
Input the dividend : 25
Input the divisor : 3
The quotient of the division is : 8
The remainder of the division is : 1
Developed by Jyotirmoy */
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main(){
    cout<< "Compute quotient and remainder :" << endl;
    cout<< "------------------------------------------ " << endl;
    int divisor, dividened, quotient, remainder;
    cout<<"Input the dividend : ";
    cin>> dividened;
    cout<< "Input the divisor : ";
    cin>> divisor;
    quotient= dividened/divisor;
    remainder= dividened%divisor;
    cout<< "The quotient of the division is : "<< quotient<< endl;
    cout<< "The remainder of the division is : "<< remainder<< endl;
}