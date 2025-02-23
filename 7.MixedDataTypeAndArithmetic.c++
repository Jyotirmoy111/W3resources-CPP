/*7. Problem- Mixed Data Types and Arithmetic

Write a C++ program that displays mixed data types and arithmetic operations.
Sample output:
Display arithmetic operations with mixed data type :
---------------------------------------------------------
5 + 7 = 12
3.7 + 8.0 = 11.7
5 + 8.0 = 13.0
5 - 7 = -2
3.7 - 8.0 = -4.3
5 - 8.0 = -3.0
5 * 7 = 35
3.7 * 8.0 = 29.6
5 * 8.0 = 40.0
5 / 7 = 0
3.7 / 8.0 = 0.5
5 / 8.0 = 0.6
Developed by Jyotirmoy*/
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int p= 5, q= 7;
    double r= 3.7, s= 8.0;
    cout<< fixed<< setprecision(1);
    cout<< p<< " + "<< q<< " = "<< p+q<< endl;
    cout<< r<< " + "<< s<< " = "<< r+s<< endl;
    cout<< p<< " + "<< s<< " = "<< p+s<< endl;
    cout<< p<< " - "<< q<< " = "<< p-q<< endl;
    cout<< r<< " - "<< s<< " = "<< r-s<< endl;
    cout<< p<< " - "<< s<< " = "<< p-s<< endl;
    cout<< p<< " * "<< q<< " = "<< p*q<< endl;
    cout<< r<< " * "<< s<< " = "<< r*s<< endl;
    cout<< p<< " * "<< s<< " = "<< p*s<< endl;
    cout<< p<< " / "<< q<< " = "<< p/q<< endl;
    cout<< r<< " / "<< s<< " = "<< r/s<< endl;  
    cout<< p<< " / "<< s<< " = "<< p/s<< endl;
    
}