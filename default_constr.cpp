/*Exp-12-Constructors and Destructors
exp12_1-Default constructor*/
#include<iostream>
using namespace std;
class student
{
    int rollno;
    char name[50];
    double fee;
/*Defining a constructor*/
    public:
    student ()
    {
        cout<<"Enter the rollno:";
        cin>>rollno;
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the Fee:";
        cin>>fee;
    }
/*Defining a function*/
    void display()
    {
        cout<<endl<<rollno<<"\t"<<fee<<"\t"<<name;
    }

};
int main()
{
    student s;/*Constructor is automatically called when an object is created */
    s.display();

}
/*output:
Enter the rollno:104
Enter the name:Sejal
Enter the Fee:25000

104     25000   Sejal*/