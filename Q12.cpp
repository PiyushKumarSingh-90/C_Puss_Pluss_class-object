/* Write a program by creating an 'Employee' class having the following functions and
print the final salary.
1 - 'getInfo()' which takes the salary, number of hours of work per day of employee as
parameters.
2 - 'AddSal()' which adds $10 to the salary of the employee if it is less than $500.
3 - 'AddWork()' which adds $5 to the salary of the employee if the number of hours of
work per day is more than 6 hours. */

#include <iostream>
using namespace std;

class Employee
{
    int salary, hour;

public:
    void getInfo()
    {
        cout << "\n\nEnter the salary : ";
        cin >> salary;

        cout << "Enter the number of hours of work per day of Employee : ";
        cin >> hour;
    }

    void addSal()
    {
        if (salary <= 500)
        {
            cout << "\n\nyour selary is less than 500 so, NOW YOUR SALARY IS  : " << salary + 10;
        }

        else
        {
            cout<<"\n\nyour selary is more than 500 so, YOUR SALARY IS   : "<<salary;
        }
    }

    void  AddWork()
    {
       if (hour >= 6)
        {
            cout << "\n\nThe employee is work MORE then 6 hour so, $5 IS ADDED IN SALARY : " << salary + 5;
        }

        else
        {
            cout<<"\n\nThe employee is work LESS then 6 hour so, THERE IS NO INCRIMENT IJN YOUR SALARY : "<<salary;
        }
    } 
    
};

int main()
{
    Employee e1;

    e1.getInfo();
    e1.addSal();
    e1.AddWork();
}