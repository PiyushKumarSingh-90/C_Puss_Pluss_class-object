/* Write a program to print the area and perimeter of a triangle having sides of
3, 4 and 5 units by creating a class named 'Triangle' with a function to print the
area and perimeter. */

#include <iostream>
using namespace std;

class Triangle
{
private:
    int area, peri, choice;
    int b, h;
    int s1,s2, s3;

public:
    void setData()
    {
        cout << "\n\nwhat u want to find : (1.Area of Triangle),(2.Area of Triangle) : ";
        cin >> choice;
    }
    void getdata()
    {
        switch (choice)
        {
        case 1:
            cout << "\nEnter the base of triangle : ";
            cin >> b;

            cout << "Enter the hight of triangle : ";
            cin >> h;

            area = (.5 * b * h);
            cout << "\narea of triangle : " << area;

            break;

        case 2:
            cout << "\nEnter the first  side of triangle : ";
            cin >> s1;

            cout << "Enter the second  side of triangle : ";
            cin >> s2;

            cout << "Enter the third  side of triangle : ";
            cin >> s3;

            peri = s1 + s2 + s3;
            cout << "\nPerimeter of triangle : " << peri;

            break;

        default:
            cout << "\nINVALID INPUT !";
            break;
        }
    }
};

int main()
{
    Triangle t1;

    t1.setData();
    t1.getdata();
}