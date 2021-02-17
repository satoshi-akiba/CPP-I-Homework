// Assignment 3 question 1 - Satoshi Akiba 
// simple bmi calculator
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    float height, weight, bmi;
    
    //Take input.
    cout << endl << "Please enter your weight, in pounds: ";
    cin >> weight;
    cout << endl << "Please enter your height, in inches: ";
    cin >> height;

    //bmi calc
    bmi = weight * (703 / pow(height, 2));
    
    //Have output show to 1 decimal place.
    cout << setprecision(1) << fixed ;

    //Print if user is overweight, underweight, or healthy weight.
    cout << "Your BMI is " << bmi << ". ";
    if (bmi > 25) {
        cout <<  "You are overweight." << endl;
    }
    if (bmi < 18.5) {
        cout << "You are underweight." << endl;
    }
    else {
        cout << "You are optimal weight." <<endl;
    }

    return 0;
}

/*
Please enter your weight, in pounds: 164

Please enter your height, in inches: 69
Your BMI is 24.2. You are optimal weight.
*/