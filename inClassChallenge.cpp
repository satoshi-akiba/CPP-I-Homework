#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int start1, start2, end1, end2, start, end, lowerend, upperstart, length;
    bool overlap;

    cin >> start1 >> end1;
    cin >> start2 >> end2;
    
    if (end1 > end2)
        {
            end = end1;
            lowerend = end2;
        }
    else
        {
            end = end2;
            lowerend = end1;
        }

    if (start1 < start2) 
        {
            start = start1;
            upperstart = start2;
        }
    else 
        {
            start = start2;
            upperstart = start1;
        }
        
    if (upperstart < lowerend)
        {
            overlap = true;
        }
    
    if (overlap == true)
        {
            length = end - start;
        }
    else
        {
            length = (end1 - start1) + (end2 - start2);
        }

    cout << length;
    return length;
}

