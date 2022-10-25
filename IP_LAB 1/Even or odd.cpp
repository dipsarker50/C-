#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b;

    cout<<"Enter your first Number: ";
    cin>>a;

    cout<<"Enter your Second Number: ";
    cin>>b;

   {

    if(a%2==0)
    {
        cout<<"Your First Number is Even"<<endl;
    }

    else
    {
        cout<<"Your Second Number is Odd"<<endl;
    }

   }

   {

    if(b%2==0)
    {
        cout<<"Your First Number is Even"<<endl;
    }

    else
    {
        cout<<"Your Second Number is Odd"<<endl;
    }

   }

   {
       if (a>b)
       {
           cout<<"The maximum Number is: "<<a;
       }

       else
       {
           cout<<"The maximum Number is: "<<b;
       }
   }

   return 0;
}
