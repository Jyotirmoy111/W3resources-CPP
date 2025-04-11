/*32. Problem- Check Number Sign (Positive, Negative, Zero)

Write a program in C++ to check whether a number is positive, negative or zero.

Sample Output:
Check whether a number is positive, negative or zero :
-----------------------------------------------------------
Input a number : 8
The entered number is positive.
Developed by Jyotirmoy*/
#include <iostream>
using namespace std;
int main(){
    cout<< "Check whether a number is positive, negative or zero :"<< endl;
    cout<< "----------------------------------------------------"<< endl;
    int n;
    cout<< "Input a number : ";
    cin>> n;
    if(n>0){
        cout<< "The entered number is positive.";
    }
    else if(n<0){
        cout<< "The entered number is negative.";
    }
    else{
        cout<< "The entered number is Zero.";
    }
}