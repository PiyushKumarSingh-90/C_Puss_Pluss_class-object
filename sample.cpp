//                                     employee management



#include <iostream>
using namespace std;

class Employee
{
public:
    string name, emp_id;
    float salary;

    void setDetails()
    {
        cout << "Enter employee ID: ";
        cin >> emp_id;
        cout << "Enter name of employee: ";
        cin>>name;
    }
    void setSalary()
    {
        cout << "Enter base salary of employee: ";
        cin >> salary;
    }
};

class Manager : public Employee
{
private:
    float bonus;

public:

    void setBonus()
    {
        cout << "Enter bonus: ";
        cin >> bonus;
    }
    void getDetails()
    {
        cout << "\n"<< "Employee ID: " << emp_id << "\n";
        cout << "Name of Employee: " << name << "\n";
        cout << "Base salary: " << salary << "\n";
        cout << "Bonus: " << bonus << "\n";
        cout << "Salary of employee: " << salary + bonus << "\n";
    }
};

class Worker : public Employee
{
private:
    int hours;

public:
    void setHours()
    {
        cout << "Enter number of hours worked: ";
        cin >> hours;
    }
    void getDetails()
    {
        cout << "\n" << "Employee ID: " << emp_id << "\n";
        cout << "Name of Employee: " << name << "\n";
        cout << "Base salary: " << salary << "\n";
        cout << "Hours worked: " << hours << "\n";
        cout << "Salary of employee: " << salary * hours << "\n";
    }
};

int main()
{
    int n;

    come_to:

    cout << "\n"
        << "Employee Management Program:" << "\n\n"
        << "1: Manager" << "\n"
        << "2: for Worker" << "\n"
        << "3: Exit" << "\n";

    cout<<"\nwhat your choice : ";
    cin >> n;
    
    if (n == 1)
    {
        Manager obj1;
        obj1.setDetails();
        obj1.setSalary();
        obj1.setBonus();
        obj1.getDetails();
        goto come_to;
    }
    else if (n == 2)
    {
        Worker obj1;
        obj1.setDetails();
        obj1.setSalary();
        obj1.setHours();
        obj1.getDetails();
        goto come_to;
    }
    else if (n == 3)
    {
        cout << "Thank You!" << "\n";
        return 0;
    }
    else
    {
        cout << "Incorrect choice. Please enter valid choice." << "\n";
        goto come_to;
    }
    return 0;
}