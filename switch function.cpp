#include<iostream>
#include<math.h>
using namespace std;

int main()
{
   float a;
   int product;

    cout<<"Select the product number";
    cin>>product;

    cout<<"Select the product amount";
    cin>>a;


    switch(product)
    {
     case 1:
         cout<<"Total amount is: "<< 200.75*a <<"Tk";
         break;

     case 2:
         cout<<"Total amount is: "<< 345.50*a <<"Tk";
         break;

    case 3:
         cout<<"Total amount is: "<< 775.75*a <<"Tk";
         break;

    case 4:
         cout<<"Total amount is: "<< 400.35*a <<"Tk";
         break;

    case 5:
         cout<<"Total amount is: "<< 1200.75*a <<"Tk";
         break;



    }

    return 0;

}
