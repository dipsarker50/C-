#include<iostream>
using namespace std;

int main()
{
    int n,digit,sum=0;

    cout<<"Enter your number: ";
    cin>>n;

    while(n!=0)
    {
       digit=n%10;
       sum=digit+sum;
       n=n/10;

    }
    cout<<sum;
    return 0;
}
