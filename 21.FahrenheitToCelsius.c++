/* 21. Problem- Fahrenheit to Celsius Conversion

Write a C++ program to convert temperature in Fahrenheit to Celsius.
Sample Output:
Convert temperature in Fahrenheit to Celsius :
---------------------------------------------------
Input the temperature in Fahrenheit : 95
The temperature in Fahrenheit : 95
The temperature in Celsius : 35 
Developed by Jyotirmoy */
#include <iostream>
using namespace std;
int main(){
    cout << "Convert temperature in Fahrenheit to Celsius : "<< endl;
    cout << "---------------------------------------------------" << endl;
    float fahrenheit, celsius;
    cout << "Input the temperature in Fshrenheit : ";
    cin >> fahrenheit;
    cout << "The temperature in Fahrenheit : " << fahrenheit << endl;
    celsius = ((fahrenheit * 5)- (5 * 32)) / 9;
    cout << "The temperature in Celsius : " << celsius;

}