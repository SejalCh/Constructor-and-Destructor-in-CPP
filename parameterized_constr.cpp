/*exp12_4-Sum of two numbers (parameterized constructor)*/
#include<iostream>
using namespace std;
class sum
{
    int a;
    int b;

    public:
    sum(int m,int n)//parameterized constructor
    {
        a=m;
        b=n;
        
    }

    void display()
    {
       cout<<"Sum of two numbers:"<<a+b<<endl;
    }
};
int main()
{
    sum s(10,20);
    s.display();
}
/*output:
Sum of two numbers:30*/