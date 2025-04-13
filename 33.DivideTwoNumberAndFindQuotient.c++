/* 33.Problem- Divide Two Numbers and Print Quotient

Write a program in C++ to divide two numbers and print them on the screen.

Sample Output:
Divide two numbers and print:
----------------------------------
The quotient of 30 and 10 is : 3
Developed by Jyotirmoy */
#include <iostream>
using namespace std;
int main(){
    cout<< "Divide two numbers and print :"<< endl;
    cout<< "-------------------------------"<< endl;
    int x= 30, y= 10;
    int quotient= x/y;
    cout<< "The quotient of 30 and 10 is : "<< quotient;
}