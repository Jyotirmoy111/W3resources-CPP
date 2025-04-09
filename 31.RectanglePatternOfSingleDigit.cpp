/* 31. Problem- Rectangular Pattern of Single Digit

Write a C++ program to input a single-digit number and print it in a rectangular form of 4 columns and 6 rows.

Sample Output:
Make a rectangular shape by a single digit number :
--------------------------------------------------------
Input the number : 5
5555
5 5
5 5
5 5
5 5
5555
Developed by Jyotirmoy */
#include <iostream>
using namespace std;
int main(){
    cout<< "Make a rectangular shape by a single digit number :"<< endl;
    cout<< "----------------------------------------------------"<< endl;
    int n;
    cout<< "Input the number : ";
    cin>> n;
    cout<< n<<n<<n<<n<< endl;
    cout<< n<<" "<<n<< endl;
    cout<< n<<" "<<n<< endl;
    cout<< n<<" "<<n<< endl;
    cout<< n<<" "<<n<< endl;
    cout<< n<<n<<n<<n<< endl;
}