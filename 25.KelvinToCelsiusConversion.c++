/* 25. Problem- Kelvin to Celsius Conversion

Write a program in C++ to convert temperature in Kelvin to Celsius.
Sample Output:
Convert temperature in Kelvin to Celsius :
------------------------------------------------
Input the temperature in Kelvin : 300
The temperature in Kelvin : 300
The temperature in Celsius : 26.85
Developed by Jyotimoy*/
#include <iostream>
using namespace std;
int main(){
    cout << "Convert temperature in Kelvin to Celsius : " << endl;
    cout << "------------------------------------------------" << endl;
    float kelvin, celsius;
    cout << "Input the temperature in Kelvin : ";
    cin >> kelvin;
    celsius= kelvin - 273.15 ;
    cout << "The temperature in Kelvin : "<< kelvin << endl;
    cout << "The temperature in celsius : "<< celsius;
}