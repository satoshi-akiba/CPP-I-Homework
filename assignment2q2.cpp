//Assignment 2 question 2 - Satoshi Akiba

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string name, age, city, college, profession, animal, petname;
    cout << endl << "Enter your name: ";
    getline(cin, name);
    cout << endl << "Enter your age: ";
    getline(cin, age);
    cout << endl << "Enter your city: ";
    getline(cin, city);
    cout << endl;
    cout << "Enter what college you attended: ";
    getline(cin, college);
    cout << endl << "Enter your profession: ";
    getline(cin, profession);
    cout << endl << "Enter a type of animal: ";
    getline(cin, animal);
    cout << endl << "Enter a pet's name: ";
    getline(cin, petname);

    cout << endl << "There once was a person named " + name + " who lived in " + city + ". At the age of " + age + ", " + name + " went to college at " + college + ". " + 
    name + " graduated and went to work as a " + profession + ". Then, " + name + " adopted a(n) " + animal + " named " + petname + ". They both lived happily ever after!" << endl;
}

/*

Enter your name: Satoshi

Enter your age: 23

Enter your city: San Jose

Enter what college you attended: SJSU

Enter your profession: Systems Engineer

Enter a type of animal: dog

Enter a pet's name: Cornelius

There once was a person named Satoshi who lived in San Jose. At the age of 23, Satoshi went to college at SJSU. Satoshi graduated and went to work as a Systems Engineer. 
Then, Satoshi adopted a(n) dog named Cornelius. They both lived happily ever after!

*/