/* Assignment 2 question 1 - Satoshi Akiba 
I will use the setw() function as found in chapter 3 of the textbook for the formatting.
The pow function(also found in the textbook), will be used for the interest calculation.
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    float principal, interestRate, interest;
    int compounded;
    
    cout << endl;
    cout << left << "Enter principal, interest rate, and number of times compounding, separated by spaces: ";
    cin >> principal >> interestRate >> compounded;
    interestRate = interestRate / 100;
    interest = principal * pow((1 + (interestRate / compounded)), compounded);

    cout << setprecision(2) << fixed;
    cout << left << endl;
    cout << left << setw(20) <<  "Interest rate:"  << right << setw(2) << " " << setw(10) << interestRate * 100 << "%" << endl;
    cout << left << setw(20) << "Times Compounded:"  << right << setw(2) << " " << setw(10) <<  compounded << endl;
    cout << left << setw(20) << "Principal:"  << right << setw(2) << "$" << setw(10) << principal << endl;
    cout << left << setw(20) << "Interest:"  << right << setw(2) << "$" << setw(10) << interest - principal <<endl; 
    cout << left << setw(20) << "Amount in savings:"  << right << setw(2) << "$" << setw(10) << interest << endl;


    return 0;
}

/* 
Enter principal, interest rate, and number of times compounding, separated by spaces: 1000 4.25 12

Interest rate:              4.25%
Times Compounded:             12
Principal:           $   1000.00
Interest:            $     43.34
Amount in savings:   $   1043.34
*/