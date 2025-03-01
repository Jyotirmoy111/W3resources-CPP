/*12. Problem- Write a C++ program to add two numbers and accept them from the keyboard.
Sample Output:
Sum of two numbers :
-------------------------
Input 1st number : 25
Input 2nd number : 39
The sum of the numbers is : 64
Developed by Jyotirmoy*/
#include<iostream>
using namespace std;
int main(){
    cout<< "Sum of two numbers : "<<endl;
    cout<< "-------------------------"<<endl;
    int x,y;
    cout<<"Input 1st number : ";
    cin>> x;
    cout<<"Input 1st number : ";
    cin>> y;
    cout<<"The sum of two numbers is : "<<x+y<<endl;
}