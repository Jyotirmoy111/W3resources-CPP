/*30. Problem- Total and Average of Four Numbers

Write a C++ program to compute the total and average of four numbers.

Sample Output:
Compute the total and average of four numbers :
----------------------------------------------------
Input 1st two numbers (separated by space) : 25 20
Input last two numbers (separated by space) : 15 25
The total of four numbers is : 85
The average of four numbers is : 21.25
Developed by Jyotirmoy*/
#include <iostream>
using namespace std;
int main(){
    cout<< "Compute the total and average of four numbers :"<< endl;
    cout<< "----------------------------------------------------"<< endl;
    float n1, n2, n3, n4;
    cout<<"Input 1st two numbers (separated by space) : ";
    cin>> n1>> n2;
    cout<<"Input last two numbers (separated by space) : ";
    cin>> n3>> n4;
    float total= n1+n2+n3+n4;
    float average= total/4;
    cout<<"The total of four numbers is : "<< total<< endl;
    cout<<"The average of four numbers is : "<< average;
}
