/*exp12_3-Constructor outside the class*/
#include<iostream>
using namespace std;
class student
{
    int rollno;
    char name[50];
    double fee;

    public:
    student();
    void display();
};
/*Defining a constructor outside the class*/
student::student()
{
     cout<<"Enter the rollno:";
        cin>>rollno;
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the Fee:";
        cin>>fee;
}

void student::display()
{
     cout<<endl<<rollno<<"\t"<<fee<<"\t"<<name;
}
int main()
{
    student s;
    s.display();
}
/*output:
Enter the rollno:104
Enter the name:sejal
Enter the Fee:25000

104     25000   sejal*/