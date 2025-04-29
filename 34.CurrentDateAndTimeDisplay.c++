/* 34. Problem- Current Date and Time Display

Write a C++ program to display the current date and time.

Sample Output:
Display the Current Date and Time :
----------------------------------------
seconds = 57
minutes = 33
hours = 12
day of month = 6
month of year = 7
year = 2017
weekday = 4
day of year = 186
daylight savings = 0
Current Date: 6/7/2017
Current Time: 12:33:57
Developed by Jyotirmoy */
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;
int main(){
    cout<< "Display the Current Date and Time :";
    cout<< "----------------------------------------";
    time_t t= time(NULL);
    tm* tPtr = localtime(&t);
    cout << " seconds = " << (tPtr->tm_sec) << endl; // Displaying seconds
    cout << " minutes = " << (tPtr->tm_min) << endl; // Displaying minutes
    cout << " hours = " << (tPtr->tm_hour) << endl; // Displaying hours
    cout << " day of month = " << (tPtr->tm_mday) << endl; // Displaying day of the month
    cout << " month of year = " << (tPtr->tm_mon)+1 << endl; // Displaying month of the year
    cout << " year = " << (tPtr->tm_year)+1900 << endl; // Displaying year
    cout << " weekday = " << (tPtr->tm_wday) << endl; // Displaying weekday
    cout << " day of year = " << (tPtr->tm_yday) << endl; // Displaying day of the year
    cout << " daylight savings = " << (tPtr->tm_isdst) << endl; // Displaying daylight savings

    cout << endl; // Outputting empty lines for formatting

    // Displaying current date and time 
    cout << " Current Date: " <<(tPtr->tm_mday)<<"/"<< (tPtr->tm_mon)+1 <<"/"<< (tPtr->tm_year)+1900<< endl; // Displaying the current date
    cout << " Current Time: " << (tPtr->tm_hour)<<":"<< (tPtr->tm_min)<<":"<< (tPtr->tm_sec) << endl; // Displaying the current time

    cout << endl;
}