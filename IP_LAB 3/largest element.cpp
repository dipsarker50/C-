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


   l = b[0];
   for(i=0; i<n; i++)
   {
      if(l<b[i])
         l = b[i];
   }


   l2 = b[1];
   for(i=0; i<n; i++)
   {
      if((l2<b[i])&&(b[i]!=l))
      {

            l2 = b[i];

      }
   }


   cout<<"\nFirst Largest Element = "<<l;
   cout<<"\nSecond Largest Element = "<<l2;

   return 0;
}
