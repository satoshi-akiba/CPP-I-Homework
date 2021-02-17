//Assignment 2 question 3 - Satoshi Akiba
//For this assignment I'll take string inputs for the names of the months, and float inputs for the rainfall
//I'll used the setprecision and fixed functions to keep output to 2 decimal places.
//A known problem is the user could enter a non-month string, or bad input. There is no error handling.

#include <iostream>
#include <iomanip>
//#include <string>

using namespace std;

int main()
{
    string month1, month2, month3;
    float rainfall1, rainfall2, rainfall3;

    cout << "Enter the months, separated by spaces: ";
    cin >> month1 >> month2 >> month3 ;
    cout << endl;
    cout << "Enter the rainfall, in the same order and separated by spaces: ";
    cin >> rainfall1 >> rainfall2 >> rainfall3;
    cout << endl;
    
    cout << setprecision(2) << fixed << "The average rainfall for " + month1 + ", " + month2 + ", and " + month3 + " is " << (rainfall1 + rainfall2 + rainfall3) / 3 << " inches." << endl;
}
/*

Enter the months, separated by spaces: Jan July Aug

Enter the rainfall, in the same order and separated by spaces: 12.222 1.345 5 

The average rainfall for Jan, July, and Aug is 6.19 inches.

*/