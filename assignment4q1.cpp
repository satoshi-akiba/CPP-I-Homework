// Assignment 4 question 1 - Satoshi Akiba 
// Average rainfall using nested loops
// One known bug is that the input validation only checks for negative or unacceptable numbers. 
// Invalid input could be a character or string

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main()
{   
    //declare vars
    int years, count, months;
    float rainfall, avgRainfall;

    //Enter years and validate
    cout << "Enter the number of years: ";
    cin >> years;

    while (years < 1)
        {
            cout << "Please enter a valid year: ";
            cin >> years;
        }

    //outer loop for each year
    for (int count = 1; count <= years; count++)
        {
            //inner loop for each month in each year
            for (int month = 1 ; month <= 12; month++)
                {
                    float rain;
                    cout << "Rainfall in inches for month " << month << " Year " << count << ": ";
                    cin >> rain;
                    
                    while (rain < 0)
                        {
                            cout << "Enter a valid amount of rainfall: ";
                            cin >> rain;
                        }

                    rainfall += rain;
                }
                
        }
    //Output formatting
    cout << setprecision(2) << fixed << left;

    //calculate and output average rainfall
    avgRainfall = rainfall / (years * 12);
    
    cout << setw(25)  << "Months: " << years * 12 << endl;
    cout << setw(25)  << "Total rainfall: " << avgRainfall << endl;
    cout << setw(25)  << "Average rainfall: " << avgRainfall << endl;
    
    return 0;
}

/*
Enter the number of years: 2
Rainfall in inches for month 1 Year 1: 1
Rainfall in inches for month 2 Year 1: 2
Rainfall in inches for month 3 Year 1: 3
Rainfall in inches for month 4 Year 1: 4
Rainfall in inches for month 5 Year 1: 1
Rainfall in inches for month 6 Year 1: 2
Rainfall in inches for month 7 Year 1: 3
Rainfall in inches for month 8 Year 1: 4
Rainfall in inches for month 9 Year 1: 1
Rainfall in inches for month 10 Year 1: 2
Rainfall in inches for month 11 Year 1: 3
Rainfall in inches for month 12 Year 1: 4
Rainfall in inches for month 1 Year 2: 1
Rainfall in inches for month 2 Year 2: 2
Rainfall in inches for month 3 Year 2: 3
Rainfall in inches for month 4 Year 2: 4
Rainfall in inches for month 5 Year 2: 1
Rainfall in inches for month 6 Year 2: 2
Rainfall in inches for month 7 Year 2: 3
Rainfall in inches for month 8 Year 2: 4
Rainfall in inches for month 9 Year 2: 1
Rainfall in inches for month 10 Year 2: 2
Rainfall in inches for month 11 Year 2: 3
Rainfall in inches for month 12 Year 2: 4

Months:                  24
Total rainfall:          2.50
Average rainfall:        2.50
*/