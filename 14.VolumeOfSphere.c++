/*Problem- Volume of a Sphere
Write a C++ program that calculates the volume of a sphere.
Sample Output:
Calculate the volume of a sphere :
---------------------------------------
Input the radius of a sphere : 6
The volume of a sphere is : 904.32
Developed by Jyotirmoy*/
#include <iostream>
using namespace std;
int main(){
    cout<<"Calculate the volume of a sphere : "<< endl;
    cout<<"-----------------------"<< endl;
    int r;
    cout<<"Input the radius of a sphere : ";
    cin>>r;
    float v= (4*(3.14)*r*r*r)/3;
    cout<< "The volume of sphere is : "<< v;
}
