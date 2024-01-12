/* Write a program to print the area of two rectangles having sides (4,5) and (5,8)
respectively by creating a class named 'Rectangle' with a function named 'Area'
which returns the area. Length and breadth are passed as parameters to its constructor.*/

#include <iostream>
using namespace std;

class Reactengle
{
    int area1, area2, peri1, peri2;
    int l1, b1, l2, b2;

public:
    void Area()
    {
        cout << "\n\nEnter the length  of  1st rect : ";
        cin >> l1;
        cout << "Enter the breath  of  1st rect : ";
        cin >> b1;

        area1 = l1 * b1;
        cout<<"\narea of 1st rectangle is :"<<area1;
        

        cout << "\n\nEnter the length  of  2st rect : ";
        cin >> l2;
        cout << "Enter the breath  of  2st rect : ";
        cin >> b2;

        area2 = l2 * b2;
        cout<<"\narea of 1st rectangle is :"<<area2;
        
    }

   

    Reactengle(int l1,int b1,int l2,int b2 )
    {
      peri1 =(l1+b1)*2;

      cout<<"\nperimeter of 1st rectagle is : "<<peri1;
      

      peri2=(l2+b2)*2;
      cout<<"\nperimeter of 2nd rectangle is : "<<peri2;
      
    }

   
};

int main()
{
    Reactengle r1(4,5,5,8);
    r1.Area();
    
}