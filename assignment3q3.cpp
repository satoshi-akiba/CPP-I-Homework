// Assignment 3 question 3 - Satoshi Akiba 
// Cost of a phone call
// User will be prompted to enter a starting hour and total minutes of call. 
// One known problem is that floats of the same number can fail equality checks (such as .59 being compared to floating point input .59)
// To work around this, floats were compared to the next highest tens place decimal (>= .6 instead of > .59)
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    //Declare Vars
    float time, minutes, cost;

    //Input vars and validation - checking against 0.6 rather thank 0.59, as floating point numbs can have rounding errors 
    //ex - 0.59 input can be come 0.5900001 
    cout << "Enter the starting time in HH.MM format: ";
    cin >> time ;
    if (time >= 23.6 || ((time - static_cast<int>(time)) >= 0.6) || time < 0)
        {
            cout << "Invalid time. Exiting now. " << endl;
            return 0;
        }

    //Vars and input validation
    cout << endl << "Enter the total minutes: ";
    cin >> minutes;
    cout << endl;
    if (minutes < 0)
        {
            cout << "Invalid call duration. Exiting now. " << endl;
            return 0;
        }

    //calculate cost
    if (time < 7)
        {
            cost = minutes * .05;
        }
    else if (time <= 19)
        {
            cost = minutes * .45;
        }
    else if (time < 24)
        {
            cost = minutes * .2;
        }
    
    //Output cost
    cout << setprecision(2) << fixed << "Total cost: " << cost << endl;
    return cost;
}

/*
Enter the starting time in HH.MM format: 6.59

Enter the total minutes: 2

Total cost: 0.10
*/