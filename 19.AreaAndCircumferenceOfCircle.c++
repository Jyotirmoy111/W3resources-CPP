/* 19. Problem- Area and Circumference of Circle

Write a C++ program to find the area and circumference of a circle.
Sample Output:
Find the area and circumference of any circle :
----------------------------------------------------
Input the radius(1/2 of diameter) of a circle : 5
The area of the circle is : 78.5397
The circumference of the circle is : 31.4159
Developed by Jyotirmoy*/
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    cout << "Find the area and circumference of any circle :" << endl;
    cout << "----------------------------------------------------" << endl;
    float radius, area, circumference;
    cout << "Input the radius(1/2 of diameter) of the circle : ";
    cin >> radius;
    area= 3.14159 * radius * radius;
    cout << fixed << setprecision(4) << area << endl;
    circumference = 2 * 3.14159 * radius; 
    cout << fixed << setprecision(4) << circumference;

}