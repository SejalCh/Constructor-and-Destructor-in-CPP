/*exp12_2-To display date (constructor inside the class)*/
#include<iostream>
using namespace std;
class date
{
   int d;
   int m;
   int y;
/* Defining the constructor inside the class*/
   public:
   date()
   {
    cout<<"Enter day:";
    cin>>d;
    cout<<"Enter month:";
    cin>>m;
    cout<<"enter year:";
    cin>>y;
    cout<<d<<"/"<<m<<"/"<<y<<endl;
   }
};
int main()
{
    date d1;
}
/*output:
Enter day:01
Enter month:09
enter year:2023
1/9/2023*/