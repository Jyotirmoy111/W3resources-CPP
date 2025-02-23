/*8. Problem- Overflow and Underflow in Arithmetic

Write a C++ program to check overflow/underflow during various arithmetic operations.
Sample Output:
Check overflow/underflow during various arithmetical operation :
Range of int is [-2147483648, 2147483647]
---------------------------------------------------------------------
Overflow the integer range and set in minimum range : -2147483648
Increasing from its minimum range : -2147483647
Product is :1
Underflow the range and set in maximum range : 2147483647
Decreasing from its maximum range : 2147483646
Product is : 0
*/
#include <iostream>
using namespace std;
int main(){
    cout << "Check overflow/underflow during various arithmetical operation : "<< endl;
    cout << "Range of int is [-2147483648, 2147483647]" << endl;
    cout << "-------------------------------------------------" << endl;
    int no = 2147483647;
    cout << "Overflow the integer range and set in minimum : " << no+1 << endl;
    cout << "Increasesing from its minimum range : " << no+2 << endl;
    cout<< "Product is :  " << no*no << endl;
    int no2 = -2147483648;
    cout << "Underflow the rangeand set in maximum range : " << no2-1 <<endl;
    cout << "Decreasing from its  maximum range  : " << no2-2 << endl;
    cout << "Product is : " << no2*no2;

}