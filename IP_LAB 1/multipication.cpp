#include<iostream>
using namespace std;

int main()
{
    int n,i;

    cout<<"Enter your Number: ";
    cin>>n;

    for(i=1;i<=10;i=i+1)
    {

      cout<<n<<"X"<<i<<"="<<n*i<<endl;

    }

    return 0;
}
