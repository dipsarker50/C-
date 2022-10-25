#include<iostream>
using namespace std;
int main()
{

    int n;

    cout<<"Enter the array Size: ";
    cin>>n;

    int b[n];

    for(int i=0;i<n;i++)
        {

        cout<<"Enter the Elements: ";
        cin>>b[i];

        }

    cout<<"Reverse Array is: "<<endl;

    for(int i=n-1; i>=0; i--)
        {
         cout<<b[i]<<endl;
        }

     return 0;

}

