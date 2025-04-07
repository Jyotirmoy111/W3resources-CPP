/*Problem-  Celsius to Kelvin Conversion

Write a program in C++ to convert temperature in Celsius to Kelvin.

Sample Output:
Convert temperature in Celsius to Kelvin :
---------------------------------------------------
Input the temperature in Celsius : 26.85
The temperature in Celsius : 26.85
The temperature in Kelvin : 300
Developed by Jyotirmoy */
#include <iostream>
using namespace std;
int main(){
    cout<< "Convert temperature in Celsius to Kelvin :" << endl;
    cout<< "--------------------------------------------------- " << endl;
    float celsius, kelvin;
    cout<< "Input the temperature in Celsius : ";
    cin>> celsius;
    cout<< "The temperature in Celsius : " << celsius << endl;
    kelvin= celsius + 273.15;
    cout<< "The temperature in Kelvin : " << kelvin;
}