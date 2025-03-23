/*18. Problem- Triangle Area Using Heron's Formula

Write a C++ program to find the area of any triangle using Heron's formula.
Sample Output:
Find the area of any triangle using Heron's Formula :
----------------------------------------------------------
Input the length of 1st side of the triangle : 5
Input the length of 2nd side of the triangle : 5
Input the length of 3rd side of the triangle : 5
The area of the triangle is : 10.8253
Developed by Jyotirmoy */
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main(){
    cout<<"Find the area of any traingle using Heron's Formula" << endl;
    cout<<"----------------------------------------------------------" << endl;
    float x,y,z;
    cout<<"Input the length of 1st side of the triangle : ";
    cin>>x;
    cout<<"Input the length of 2nd side of the triangle : ";
    cin>>y;
    cout<<"Input the length of 3rd side of the triangle : ";
    cin>>z;
    float side= (x+y+z)/2;
    float area= sqrt(side * (side - x) * (side - y) * (side - z));
    cout<< "The area of triangle is : "<<area;
}