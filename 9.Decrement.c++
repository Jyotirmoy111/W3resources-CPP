/* 9. Problem- Pre and Post Increment/Decrement

Write a C++ program to display the operation of pre and post increment and decrement.
Sample Output:
Display the operation of pre and post increment and decrement :
--------------------------------------------------------------------
The number is : 57
After post increment by 1 the number is : 58
After pre increment by 1 the number is : 59
After increasing by 1 the number is : 60
After post decrement by 1 the number is : 59
After pre decrement by 1 the number is : 58
After decreasing by 1 the number is : 57
Developed by Jyotirmoy*/
#include <iostream>
using namespace std;
int main(){
    cout << "Display the operation of pre and post increment and decrement : " << endl;
    cout << "-----------------------------------------------------------------------" << endl;
    int number=  57;
    cout << "The number is : "<< number << endl;
    number++;
    cout << "After post increment by 1 the number is : "<< number << endl;
    ++number;
    cout << "After pre increment by 1 the number is : " << number << endl;
    number +=1;
    cout << "After increasing by 1 the number is : " <<number << endl;
    number--;
    cout << "After post decrement by 1 the number is : " << number << endl;
    --number;
    cout << "After pre decrement by 1 the number is : " << number << endl;
    number -=1;
    cout << "After decreasing by 1 the number is : " << number;

}