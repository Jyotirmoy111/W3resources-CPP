/* 26. Problem- Fahrenheit to Kelvin Conversion

Write a program in C++ to convert temperature in Fahrenheit to Kelvin.
Sample Output:
Convert temperature in Fahrenheit to Kelvin :
---------------------------------------------------
Input the temperature in Fahrenheit : 80.33
The temperature in Fahrenheit : 80.33
The temperature in Kelvin : 300
Developed by Jyotirmoy*/
#include <iostream>
using namespace std;
int main(){
    cout<< "Convert temperature in Fahrenheit to Kelvin :" << endl;
    cout<< "--------------------------------------------------- " << endl;
    float fahrenheit, kelvin;
    cout<< "Input the temperature in Fahrenheit to Kelvin : ";
    cin>> fahrenheit;
    cout<< "The temperature in Fahrenheit : " << fahrenheit << endl;
    kelvin= (5.0 / 9) * (fahrenheit - 32) + 273.15;
    cout << "The temperature in Kelvin : " << kelvin ;
}