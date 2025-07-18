/*38. Problem- Multiplication Table for Input Number

Write a C++ program that takes a number as input and prints its multiplication table up to 10.

Sample Output:
Print the multiplication table of a number upto 10:
--------------------------------------------------------
Input a number: 5
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
5 x 4 = 20
5 x 5 = 25
5 x 6 = 30
5 x 7 = 35
5 x 8 = 40
5 x 9 = 45
5 x 10 = 50
Developed by Jyotirmoy */
#include <iostream>
using namespace std;
int main(){
    cout<< "Print the multiplication table of a number upto 10: "<< endl;
    cout<< "--------------------------------------------------------"<< endl;
    cout<< "Input a number: ";
    int num;
    cin>> num;
    for(i=1; i<=10; i++){
        cout<< num<< " X "<< i<< " = "<< num*i<< endl;
    }
}