/*16. Problem- Write a C++ program that calculates the volume of a cylinder.
Sample Output:
Calculate the volume of a cylinder :
-----------------------------------------
Input the radius of the cylinder : 6
Input the height of the cylinder : 8
The volume of a cylinder is : 904.32
Developed by Jyotirmoy*/
#include <iostream>
using namespace std;
int main(){
    cout<<"Calculate the volume of a cylinder : "<<endl;
    cout<<"-----------------------------------------"<<endl;
    int r, h;
    cout<<"Input the radius of the cylinder : ";
    cin>> r;
    cout<<"Input the height of the cylinder : ";
    cin>> h;
    float volume= 3.14 * r * r * h;
    cout<<"The volume of a cylinder is : "<<volume;
}