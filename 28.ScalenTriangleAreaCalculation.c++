/* 28. Problem- Scalene Triangle Area Calculation

Write a C++ program to find the area of the Scalene Triangle.

Sample Output:
Find the area of Scalene Triangle :
----------------------------------------
Input the length of a side of the triangle : 5
Input the length of another side of the triangle : 6
Input the angle between these sides of the triangle : 6
The area of the Scalene Triangle is : 1.56793
Developed by Jyotirmoy */
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main(){
    cout<< "Find the area of Scalen Triangle :" << endl;
    cout<< "------------------------------------------ " << endl;
    float side1, side2, angle, area;
    float PI= 3.14159;
    cout<< "Input the length of a side of the triangle : ";
    cin>> side1;
    cout<< "Input the length of another side of the triangle : ";
    cin>> side2;
    cout<< "Input the angle between these sides of the triangle : ";
    cin>> angle;
    area= (side1 * side2 * sin((PI / 180) * angle)) / 2;
    cout<< "The area of the Scalene Triangle is : " << area ;
}