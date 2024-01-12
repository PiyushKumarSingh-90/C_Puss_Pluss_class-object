/*  Assign and print the roll number, phone number and address of two students having 
names "Sam" and "John" respectively by creating two objects of the class 'Student'. */

#include <iostream>
using namespace std;

class info
{ 
    private:
    string name;
    int rollno;
    int mob;

    public:
    void setinfo1(string name="sam" ,int rollno=2 ,int mob=1234)
    {
        cout<<"Name : "<<name<<"\nroll : "<<rollno<<"\nmobile no.:"<<mob;
    }

     void setinfo2(string name="jonh" ,int rollno=3 ,int mob=5688)
    {
        cout<<"\n\nName : "<<name<<"\nroll : "<<rollno<<"\nmobile no.:"<<mob;
    }
};

int main()
{
   info s1,s2;
    s1.setinfo1();
    s2.setinfo2();
}