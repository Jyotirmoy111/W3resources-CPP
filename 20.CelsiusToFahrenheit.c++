/*20. Problem- Celsius to Fahrenheit Conversion

Write a C++ program to convert temperature in Celsius to Fahrenheit.
Sample Output:
Convert temperature in Celsius to Fahrenheit :
---------------------------------------------------
Input the temperature in Celsius : 35
The temperature in Celsius : 35
The temperature in Fahrenheit : 95
Developed by Jyotirmoy */
#include <iostream>
using namespace std;
int main(){
    cout<< "Convert temperature in Celsius to Fahrenheit : " << endl;
    cout<< "---------------------------------------------------" << endl;
    float celsius, fahrenheit;
    cout<<"Input the temerature in Celsius : ";
    cin>> celsius;
    cout<< "The temperature in Celsius : " << celsius << endl;
    fahrenheit = (celsius * 9) / 5 + 32;
    cout<< "The temperature in Fahrenheit : " << fahrenheit;
}