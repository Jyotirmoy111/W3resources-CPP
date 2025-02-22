/*6. Problem- Check Primitive Value Limits

Write a C++ program that checks whether primitive values cross the limit.
Check whether the primitive values crossing the limits or not :
--------------------------------------------------------------------
The Gender is : F
Is she married? : 1
Number of sons she has : 2
Year of her appointment : 2009
Salary for a year : 1500000
Height is : 79.48
GPA is 4.69
Salary drawn upto : 12047235
Balance till : 995324987
Developed by Jyotirmoy*/
#include <iostream>
using namespace std;

int main(){
    char gender= 'F';
    cout<< "The Gender is : "<< gender<< endl;

    bool married= 1;
    cout<< "Is she married? : "<< married<< endl;

    int sons= 2;
    cout<< "Number of sons she has : "<< sons<< endl;

    int appointment= 2009;
    cout<< "Year of appointment : "<< appointment<< endl;

    int salary= 1500000;
    cout<< "Salary for a year : "<< salary<< endl;

    double height= 79.48;
    cout<< "Height : "<< height<< endl;
    
    float gpa= 4.69;
    cout<< "GPA is : "<< gpa<< endl;

    long salary_drawn= 12047235l;
    cout<< "Salary drawn upto : "<< salary_drawn<< endl;

    long balance= 995324987l;
    cout<< "Balance till : "<< balance<< endl;
}