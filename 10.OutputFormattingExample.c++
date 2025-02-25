/* 10. Problem- Output Formatting Example

Write a C++ program to format the output.
Sample Output:
Formatting the output :
----------------------------
The value of pi : 3.1416
The value of pi 4 decimal place of total width 8 : | 3.1416|
The value of pi 4 decimal place of total width 10 : | 3.1416|
The value of pi 4 decimal place of total width 8 : |--3.1416|
The value of pi 4 decimal place of total width 10 : |----3.1416|
The value of pi in scientific format is : 3.1416e+00
Status in number : 0
Status in alphabet : false
Developed by Jyotirmoy*/

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double pi= 3.1416;
    cout<<"Formatting the output" << endl;
    cout<<" ----------------------------" << endl;
    cout<<fixed << setprecision(4);
    cout << "The value of pi : " << pi <<endl;
    cout << "The value of pi 4 decimal place of total width 8 : |" << setw(8) << pi << "|" << endl;
    cout << "The value of pi 4 decimal place of total width 10 : |" << setw(10) << pi << "|" << endl;
    cout << setfill('-');
    cout << "The value of pi 4 decimal place of total width 8 : |" << setw(8) << pi << "|" << endl;
    cout << "The value of pi 4 decimal place of total width 10 : |" << setw(10) << pi << "|" << endl;
    cout << scientific;
    cout << "The value of pi in scientific format is : " << pi << endl;
    bool no = false;
    cout << "Status in number : " << no << endl;  
    cout<< boolalpha;
    cout << "Status in alphabet : " << no << endl;
}