#include<iostream>

using namespace std;
int main()
{
    int n ,i,l, l2;

    cout<<"Enter total size of array: ";
    cin>>n;

    float b[n];


    for(int i=0;i<n;i++)
        {
         cout<<"Enter numbers: ";
         cin>>b[i];
        }


   l = 100;
   for(i=0; i<n; i++)
   {
      if(l>b[i])
         l = b[i];
   }


    l2 = 100;
   for(i=0; i<n; i++)
   {
      if((l2>b[i])&&(b[i]!=l))
      {
                l2 = b[i];
      }
   }

   cout<<"\nFirst small Element = "<<l;
   cout<<"\nSecond small Element = "<<l2;

   return 0;
}

