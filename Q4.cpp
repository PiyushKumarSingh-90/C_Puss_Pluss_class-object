/* Write a program to print the area and perimeter of a triangle having sides of
3, 4 and 5 units by creating a class named 'Triangle' with the CONSTRUSTER having
the three sides as its parameters. */

#include <iostream>
using namespace std;

class Triangle
{
    int area,peri;
    int s1, s2, s3;

public:


    Triangle(int s1, int s2,int s3)
    {
        peri=s1+s2+s3;
        area=(s1+s2+s3)/2;

        cout<<"\narea : "<<area;
       cout<<"\nperimeter : "<<peri;
    }
};

int main()
{
    Triangle t1(3,4,5);

}