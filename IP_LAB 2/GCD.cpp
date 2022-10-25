#include<iostream>
using namespace std;

int main()
{
    int a,b,i,gcd;

    cout<<"Enter your 1st Number: ";
    cin>>a;

    cout<<"Enter your 2nd Number: ";
    cin>>b;

    for(i=1; i<=a&&i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }

    }
    cout<<"GCD is:"<<gcd<<endl;
    return 0;
}
