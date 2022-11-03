#include<iostream>
using namespace std;

int main()
{
    int n;
    float r;

    cout<<"1) Area of circle \n2) Area of rectangle \n3) Area of triangle \n4) Area of square. \n\n Choose the number from the menu: ";
    cin>>n;

    switch(n)
    {
    case 1:
        {
            cout<<"Enter the radius of circle: ";
            cin>>r;
            cout<<"\nThe Area of circle is: " << 3.14*r*r;
        }

        break;

    case 2:
        {
            float l,w;
            cout<<"Enter the Lenght : ";
            cin>>l;
            cout<<"\nEnter the Width : ";
            cin>>w;
            cout<<"\nThe Area of rectangle is: " << l*w;
        }
         break;

    case 3:
        {
            float b, h;
            cout<<"Enter the Base : ";
            cin>>b;
            cout<<"\nEnter the Height : ";
            cin>>h;
            cout<<"\nThe Area of triangle is: " << (b*h)/2;
        }
         break;

    case 4:
        {
            float s;
            cout<<"Enter the Side : ";
            cin>>s;

            cout<<"\nThe Area of triangle is: " << s*s;
        }
          break;


    default:
        cout<<"Invaild Choose";

    }

  return 0;


}

