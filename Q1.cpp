/* Create a class named 'Student' with a string variable 'name' and an integer variable 
'roll_no'. Assign the value of roll_no as '2' and that of name as "John" by creating 
an object of the class Student.  */

#include <iostream>
using namespace std;

class Student 
{
    string name;
    int rollno;

    public:
    void setdata(string name , int rollno)
    {
       cout<<"student name : "<<name<<"\nroll no. "<<rollno;
       
    }
    


};

int main()
{
   Student s1;
   s1.setdata("jonh",2);
   
}
