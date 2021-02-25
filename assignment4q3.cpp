// Assignment 4 question 3 - Satoshi Akiba 
// savings account balance


#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{   
    //declare vars
    int sum, count; 
    float floatSum, number;
    sum = 0;
    count = 0;
    ifstream infile;
    
    //open file (can't use ~ for directory)
    infile.open("/Users/satoshiakiba/Downloads/Random.txt");

    //loop through file if opened properly
    if (infile) 
    {
        while (infile >> number)
            {
                sum += number;
                count +=1;
            }
    }
    else   
    {
        cout << "File not opened. " <<endl;
        return 0;
    }

    //format output
    cout << setprecision(2) << fixed;
    //output
    cout << count << " numbers found in this file." << endl;
    cout << "Sum of all numbers: " << sum << endl;
    floatSum = static_cast<float>(sum);
    cout << "Avg of all numbers: " << floatSum / count << endl;

    return 0;
}

/*
200 numbers found in this file.
Sum of all numbers: 105527
Avg of all numbers: 527.64
*/