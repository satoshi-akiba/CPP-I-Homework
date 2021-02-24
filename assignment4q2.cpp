// Assignment 4 question 2 - Satoshi Akiba 
// savings account balance


#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main()
{   
    //declare vars, accept input, validate it
    float interestRate, balance, withdrawls, deposits, interest;
    int months;
    withdrawls = 0;
    deposits = 0;

    cout << "Enter the interest rate: ";
    cin >> interestRate;

    while (interestRate < 0)
    {
        cout << "Enter the interest rate: ";
        cin >> interestRate;
    }
    cout << endl << "Enter the starting balance: ";
    cin >> balance;
    while (balance < 0)
    {
        cout << "Enter the start balance: ";
        cin >> balance;
    }
    cout << endl << "Enter number of months elapsed: ";
    cin >> months;

    while (months < 0)
    {
        cout << "Enter the months: ";
        cin >> months;
    }

    //Change Interest rate from whole number to decimal e.g) 1.90 --> 0.019
    interestRate /= 100;

    //loop over months
    for (int count = 1; count <= months; count ++)
    {
        float deposited, withdrawn;
        //Take input, validate
        cout << "Amount deposited for month " << count << ": ";
        cin >> deposited;
        while (deposited < 0)
            {
                cout << "Amount deposited for month " << count << ": ";
                cin >> deposited; 
            }

        cout << "Amount withdrawn for month " << count << ": ";
        cin >> withdrawn;

        while (withdrawn < 0)
            {
                cout << "Amount withdrawn for month " << count << ": ";
                cin >> withdrawn; 
            }

        //Exit if account balance is negative
        if (balance < 0)
            {
                cout << "Your account has been closed.";
                break;
            }

        //Add, subtract deposits and withdrawls
        balance += deposited;
        balance -= withdrawn;
        withdrawls += withdrawn;
        deposits += deposited;

        //calculate monthly interest
        interest += balance * (interestRate /12);
        balance += (balance * (interestRate / 12));

    }

    //Set output format
    cout << setprecision(2) << fixed << left;

    //output return values
    cout << "Ending balance: " << balance << endl;
    cout << "Total deposits: " << deposits << endl;
    cout << "Total withdrawls: " << withdrawls << endl;
    cout << "Total interest: " << interest << endl;
    

    return 0;
}

/*
Enter the interest rate: 10

Enter the starting balance: 100 

Enter number of months elapsed: 12
Amount deposited for month 1: 1
Amount withdrawn for month 1: 2
Amount deposited for month 2: 1
Amount withdrawn for month 2: 2
Amount deposited for month 3: 3
Amount withdrawn for month 3: 1
Amount deposited for month 4: 2
Amount withdrawn for month 4: 3
Amount deposited for month 5: 4
Amount withdrawn for month 5: 1
Amount deposited for month 6: 2
Amount withdrawn for month 6: 3
Amount deposited for month 7: 4
Amount withdrawn for month 7: 1
Amount deposited for month 8: 2
Amount withdrawn for month 8: 3
Amount deposited for month 9: 4
Amount withdrawn for month 9: 1
Amount deposited for month 10: 2
Amount withdrawn for month 10: 3
Amount deposited for month 11: 4
Amount withdrawn for month 11: 1
Amount deposited for month 12: 2
Amount withdrawn for month 12: 3
Ending balance: 117.74
Total deposits: 31.00
Total withdrawls: 24.00
Total interest: 10.74
*/