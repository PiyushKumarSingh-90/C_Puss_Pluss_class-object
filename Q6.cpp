/* Write a program to print the area of a rectangle by creating a class named 
'Area' having two functions. First function named as 'setDim' takes the length 
and breadth of the rectangle as parameters and the second function named as 
'getArea' returns the area of the rectangle. Length and breadth of the rectangle 
are entered through keyboard. */


#include <iostream>
using namespace std;

class Area
{
    int l, b;

public:
    Area()
    {
        cout << "\n\nEnter the length of :  ";
        cin >> l;

        cout << "Enter the length of :  ";
        cin >> b;

        cout << "\nperimeter : " << (l + b) * 2;
    }

    int getdata()
    {
        cout << "\n\nEnter the length of :  ";
        cin >> l;

        cout << "Enter the length of :  ";
        cin >> b;

        cout << l * b;
        return l * b;
    }
};

int main()
{
    Area a1;

    a1.getdata();
}