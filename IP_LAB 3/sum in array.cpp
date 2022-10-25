#include<iostream>
using namespace std;
int main()
{

    int n,sum=0;

    cout<<"Enter the total subject: ";
    cin>>n;

    float b[n];

    for(int i=0;i<n;i++)
        {
         cout<<"Enter the subjects number: ";
         cin>>b[i];

        }

     for(int j=0;j<n;j++)
        {
         sum = sum + b[j];
        }



    cout<<"Sum : "<<sum<<endl;
    float a=float(sum)/n;
    cout<<"Avg: "<<a;


   return 0;

}
