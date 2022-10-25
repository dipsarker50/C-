#include<iostream>
using namespace std;

int main()
{
   int a[20],even[20],odd[20],i,j=0,k=0,size;

   cout<<"Enter array size: ";
   cin>>size;


        for(i=0; i<size; i++)
        {
            cout<<"\nEnter a["<<i<<"] Element : ";
                cin>>a[i];
        }



        for(i=0; i<size;i++)
          {
           if(a[i]%2==0)
           {
             even[j]=a[i];
              j++;
            }
         else if
           {
            odd[k]=a[i];
             k++;
           }
         }

  cout<<"Even Elements in Array are : \n";

         for(i=0; i<j ;i++)
         {
          cout<<" "<<even[i]<<" ";
        }

  cout<<"Odd Elements in Array are : \n";

         for(i=0; i<k; i++)
          {
            cout<<" "<<odd[i]<<" ";
           }



  return 0;

  }
