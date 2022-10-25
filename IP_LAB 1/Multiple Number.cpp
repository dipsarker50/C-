#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b,c;

    cout<<"Enter your first Number: ";
    cin>>a;

    cout<<"Enter your Second Number: ";
    cin>>b;

    c=a%b;

    if (c==0)
    cout <<"First Number is multiple of second";

    else
    cout <<"First Number isn't multiple of second";

    return 0;



}
