/* 40. Problem- Area and Perimeter of Rectangle

Write a C++ program to print the area and perimeter of a rectangle.

Sample Output:
Print the area and perimeter of a rectangle:
----------------------------------------------
Input the width of the rectangle: 8.5
Input the height of the rectangle: 5.6
The area of the rectangle is: 47.6
The perimeter of the rectangle is: 28.2

 Developed by Jyotirmoy */
#include <iostream>
int main(){
    float area, perimeter, width, height;
    cout << " Print the area and perimeter of a rectangle:\n"; 
    cout << "----------------------------------------------\n";
    cout << "Input width of Rectangle: ";
    cout << "Input height of Rectangle: ";
    cout << "The area of the rectangle is: "<< width*height << "\n";
    cout << "The perimeter of the rectangle is: "<< 2*(width+height);
}