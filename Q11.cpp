/* Write a program that would print the information (name, year of joining, salary, address)
of three employees by creating a class named 'Employee'. The output should be as follows:

Name        Year of joining        Address
Robert        1994        64C- WallsStreat
Sam        2000        68D- WallsStreat
John        1999        26B- WallsStreat */

#include <iostream>
using namespace std;

class Employee
{
    string name, address;
    int n, year, salary;

public:
    void setdata()
    {

        cout << "\nEnter the name of Employee : ";
        cin >> name;

        cout << "Enter the YEAR OF JOINING : ";
        cin >> year;

        cout << "Enter the SALARY : ";
        cin >> salary;

        cout << "Enter the ADDRESS : ";
        cin >> address;
    }

    void getdata()
    {
       
        cout << "\n"<< name << "        " << year << "             " << salary << "          " << address;
    }
};

int main()
{

    int n;
    cout << "\n\nEnter the no. of enmployee ";
    cin >> n;

    Employee e1[n];

    for (int i = 1; i <= n; i++)
    {
        e1[i].setdata();
    }

    cout << "\n\n";
    cout << "name" << "      "<< "year of joining"<< "       "<< "salary"<< "       "<< "address";
    
    
    for (int i = 1; i <= n; i++)
    {

        e1[i].getdata();
    }

    

}