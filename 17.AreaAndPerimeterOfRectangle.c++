/*17. Problem- Area and Perimeter of Rectangle

Write a C++ program to find the Area and Perimeter of a Rectangle.
Sample Output:
Find the Area and Perimeter of a Rectangle :
-------------------------------------------------
Input the length of the rectangle : 10
Input the width of the rectangle : 15
The area of the rectangle is : 150
The perimeter of the rectangle is : 50
Developed by Jyotirmoy*/
#include <iostream>
using namespace std;
int main(){
    cout<< "Find the Area and Perimeter of a Rectangele : "<< endl;
    cout<< "-------------------------------------------------"<< endl;
    int length, width;
    cout<< "Input the length of the rectangel : ";
    cin>> length;
    cout<< "Input the width of the rectangle : ";
    cin>> width;
    cout<< "The area of the rectangel is : "<< (length * width)<< endl;
    cout<< "The perimeter of the rectangel is : "<< (2*(length + width))<< endl;

}