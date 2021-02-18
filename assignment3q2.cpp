// Assignment 3 question 2 - Satoshi Akiba 
// Days in a month
// User will be prompted to enter a month and year. The program will return the days in the month.
// Limitation in this is that the error validation simply exits, does not re prompt.
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    //Declare variables
    int month, year, days;
    bool leap;

    //Input vars. Check if valid input. Exit with err|| message if not.
    cout << "Enter a month (1-12): ";
    cin >> month;
    if (1 > month || month > 12)
        {
            cout << "Month not valid. Exiting." << endl;
            return 0;
        }
    cout << endl << "Enter a year: ";
    cin >> year;
    cout << endl;


    //Determine if leap year
    if (year % 100 == 0 && year != 0)
        {
            if (year % 400 == 0)
                leap = true;
        }
    else if (year % 4 == 0)
        {
            leap = true;
        }
    else 
        {
            leap = false;
        }

    //Determine if feb, && if leap
    if (month == 2)
        {
            if (leap == true)
                {
                    cout << 29 << " days";
                }
            else 
                {
                    cout << 28 << " days";
                }
        }
    
    //Print all other scenarios (31 || 30 day month)
    else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        {
            cout << 31 << " days";
        }
    else 
        {
            cout << 30 << " days";
        }
    cout << endl;
    return 0;
}

/*
Enter a month (1-12): 2

Enter a year: 2000

29 days
*/