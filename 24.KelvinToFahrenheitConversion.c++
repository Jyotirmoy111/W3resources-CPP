/* 24. Problem- Kelvin to Fahrenheit Conversion

Write a program in C++ to convert temperature in Kelvin to Fahrenheit.
Sample Output:
Convert temperature in Kelvin to Fahrenheit :
---------------------------------------------------
Input the temperature in Kelvin : 300
The temperature in Kelvin : 300
The temperature in Fahrenheit : 80.33
Developed by Jyotirmoy*/
#include <iostream>
using namespace std;
int main(){
    cout << "Convert temperature in Kelvin to Fahrenheit : " << endl;
    cout << "---------------------------------------------------" << endl;
    float kelvin, fahrenheit;
    cout << "Input the temperature in Kelvin : ";
    cin >> kelvin;
    cout << "The temperature in Kelvin : "<< kelvin << endl;
    fahrenheit = (9.0/5) * (kelvin - 273.15) + 32;
    cout << "The temperature in Fahrenheit : " << fahrenheit;;
}