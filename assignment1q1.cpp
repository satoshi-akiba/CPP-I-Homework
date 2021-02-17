// Assignment 1 question 1 - Satoshi Akiba 
#include <iostream>
using namespace std;

int main()
{
    //variables
    float item1, item2, item3, item4, item5, total, subTotal, taxRate, tax;
    item1 = 15.95;
    item2 = 24.95;
    item3 = 6.95;
    item4 = 12.95;
    item5 = 3.95;
    taxRate = 0.07;

    //There is definitely a better way to do this, but I'm not sure if you want us to go ahead and 
    //learn further language syntax, or just use what we learned that week.
    //item1
    total = item1 + (item1 * taxRate);
    subTotal = item1 + (item1 * taxRate);
    cout << "Item1 price: " << item1 << "| Tax: " << item1 * taxRate << "| Subtotal: " << subTotal <<  "| Total: " << total << endl;
    //item2
    total = total + item2 + (item2 * taxRate);
    subTotal = item2 + (item2 * taxRate);
    cout << "Item2 price: " << item2 << "| Tax: " << item2 * taxRate << "| Subtotal: " << subTotal <<  "| Total: " << total << endl;
    //item3
    total = total + item3 + (item3 * taxRate);
    subTotal = item3 + (item3 * taxRate);
    cout << "item3 price: " << item3 << "| Tax: " << item3 * taxRate << "| Subtotal: " << subTotal <<  "| Total: " << total << endl;
    //item4
    total = total + item4 + (item4 * taxRate);
    subTotal = item4 + (item4 * taxRate);
    cout << "item4 price: " << item4 << "| Tax: " << item4 * taxRate << "| Subtotal: " << subTotal <<  "| Total: " << total << endl;
    //item5
    total = total + item5 + (item5 * taxRate);
    subTotal = item5 + (item5 * taxRate);
    cout << "item5 price: " << item5 << "| Tax: " << item5 * taxRate << "| Subtotal: " << subTotal <<  "| Total: " << total << endl;
    //total
    cout << "Item total: " << item1 + item2 + item3 + item4 + item5 << endl;
    cout <<"Tax: " << total - item1 - item2 - item3 - item4 - item5 << endl;
    cout << "Total: " << total;
    return 0;

}

/*
Item1 price: 15.95| Tax: 1.1165| Subtotal: 17.0665| Total: 17.0665
Item2 price: 24.95| Tax: 1.7465| Subtotal: 26.6965| Total: 43.763
item3 price: 6.95| Tax: 0.4865| Subtotal: 7.4365| Total: 51.1995
item4 price: 12.95| Tax: 0.9065| Subtotal: 13.8565| Total: 65.056
item5 price: 3.95| Tax: 0.2765| Subtotal: 4.2265| Total: 69.2825
Item total: 64.75
Tax: 4.53249
Total: 69.2825
*/