/* Print the average of three numbers entered by the user by creating a class named 
'Average' having a function to calculate and print the average without creating any 
object of the Average class. */

#include <iostream>
using namespace std;

class Average
{
public:
    static  int setdata(int a, int b, int c)
    {
        return (a + b + c) / 3;
    }
};

int main()
{
    int a, b, c;

    cout<<"enter the no. : ";

    cin >> a;
    cin >> b;
    cin >> c;

    cout << "Average : " <<Average::setdata(a, b, c);
    return 0;
}

