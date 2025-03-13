/*Problem- Volume of a Cube
Write a C++ program that calculates the volume of a cube.
Sample Output:
Calculate the volume of a cube :
---------------------------------------
Input the side of a cube : 5
The volume of a cube is : 125
Developed by Jyotirmoy*/
#include <iostream>
using namespace std;
int main(){
    cout<<"Calculate the volume of a cube : "<< endl;
    cout<<"-----------------------"<< endl;
    int x;
    cout<<"Input the side of a cube : ";
    cin>>x;
    float volume= x*x*x;
    cout<<volume;
}