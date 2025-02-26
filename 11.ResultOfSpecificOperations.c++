/* 11. Problem- Results of Specific Operations

Write a C++ program to print the results of the specified operations.
Sample Output:
Print the result of some specific operation :
--------------------------------------------------
Result of 1st expression is : 23
Result of 2nd expression is : 5
Result of 3rd expression is : 12
Result of 4th expression is : 3
Developed by Jyotirmoy*/
#include<iostream>
using namespace std;
int main(){
    cout<<"Print the result of some specific operation:" << "\n";
    cout << " Result of 1st expression is : "<< (-1+4*6) <<"\n" ; 
    cout << " Result of 2nd expression is : "<< ((35+5)%7) <<"\n" ; 
    cout << " Result of 3rd expression is : "<< (14+-4*6/11) <<"\n" ; 
    cout << " Result of 4th expression is : "<< (2+15/6*1-7%2);
}