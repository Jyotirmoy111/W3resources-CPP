/* 22. Problem- Find Third Angle of Triangle

Write a C++ program to find the third angle of a triangle.
Sample Output:
Find the third angle of a triangle :
-----------------------------------------
Input the 1st angle of the triangle : 30
Input the 2nd angle of the triangle : 60
The 3rd of the triangle is : 90
Developed by Jyotirmoy */
#include <iostream>
using namespace std;
int main(){
    cout << "Find the third angle of a triangle : " << endl;
    cout << "-----------------------------------------" << endl;
    double first, second, third;
    cout << "Input the 1st angle of a the triangle : ";
    cin >> first;
    cout << "Input the 2nd angle of the triangle";
    cin >> second;
    third = 180 - (first + second);
    cout << "The 3rd of the triangle is : " << third;
}