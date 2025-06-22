/*36. Problem- Test Type Casting in C++

Write a program in C++ to test Type Casting.

Sample Output:
Formatting the output using type casting:
----------------------------------------------
Print floating-point number in fixed format with 1 decimal place:
Test explicit type casting :
0
0.5
0.5
0.0
Test implicit type casting :
0
0
int implicitly casts to double:
4.0
double truncates to int!:
6
Developed by Jyotirmoy */
#include <iostream>
using namespace std;
int main(){
    cout<< "Formatting the output using type casting:"<< endl;
    cout<< "----------------------------------------------"<< endl;
    cout<< "Print floating-point number in fixed format with 1 decimal place:"<< endl;
    cout<< "Test explicit type casting : ";
    int i1=4, i2=8; 
    cout << i1 / i2 << endl;
    cout << (double)i1 / i2 << endl; 
    cout << i1 / (double)i2 << endl; 
    cout << (double)(i1 / i2) << endl; 
    double d1 = 5.5, d2 = 6.6;  
    cout << "\nTest implicit type casting : "<< endl;

    cout << (int)d1 / i2 << endl; 
    cout << (int)(d1 / i2) << endl; 
    cout << "int implicitly casts to double: "<< endl;
    d1 = i1; 
    cout << d1 << endl; 

    cout << "double truncates to int!: "<< endl;
    i2 = d2;
    cout << i2 << endl;
}