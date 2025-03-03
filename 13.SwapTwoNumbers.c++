/*13. Problem- Write a C++ program that swaps two numbers.
Sample Output:
Swap two numbers :
-----------------------
Input 1st number : 25
Input 2nd number : 39
After swapping the 1st number is : 39
After swapping the 2nd number is : 25
Developed by Jyotirmoy */
#include <iostream>
using namespace std;
int main(){
    cout<<"Swap two numbers : "<< endl;
    cout<<"-----------------------"<< endl;
    int x, y;
    cout<<"Enter 1st number :  ";
    cin>> x;
    cout<<"Enter 2nd number :  ";
    cin>> y;
    int temp= x;
    x= y;
    y= temp;
    cout<<"After swapping the 1st number is : "<< x<< endl;
    cout<<"After swapping the 2nd number is : "<< y;
}