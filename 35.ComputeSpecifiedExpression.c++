/* 35. Problem- Compute Specified Expression

Write a program in C++ to compute the specified expressions and print the output.

Sample Output:
Compute the specified expressions and print the output:
------------------------------------------------------------
Result of the expression (25.5 * 3.5 - 3.5 * 3.5) / (40.5 - 4.5) is : 2.13889 
Developed by Jyotirmoy */
#include <iostream>
using namespace std;
int main(){
    cout<< "Compute the specified expressions and print the output:"<< endl;
    cout<< "------------------------------------------------------------"<< endl;
    cout<< "Result of the expression (25.5 * 3.5 - 3.5 * 3.5) / (40.5 - 4.5) is : ";
    cout<< (25.5 * 3.5 - 3.5 * 3.5) / (40.5 - 4.5); 
}