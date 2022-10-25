#include <iostream>
#include <math.h>
using namespace std;

int main()

{
    float a,b,c,sum1,sum2,sum3,sum4,sum5,sum6;



    cout << "Enter the value of a,b,c" << endl; //showoff message
    cin>> a>> b>>c;

    sum1= b*b - 4*a*c;                           //sum1 means determinant.
    sum2=(pow ((sum1),1/2.0));                  //alternative: sum2 = sqrt(sum1);

    //cout<<sum2;

if(sum1>=0){                                     // if determinant>=0 is real number.
    sum3= ((-b+sum2)/(2*a));
    sum4= ((-b-sum2)/(2*a));

    cout<<"The value of x1 is:"<<sum3 << endl;
    cout<<"The value of x2 is:"<<sum4;
  }

  else if (sum1<0)                               //unreal number
  {
     cout<< "Value is complex & Unreal Number"<<endl;

     sum5=(-b/(2*a));                               // (-b/(2*a))+-sqrt(-(sum1/(2*a)));
     sum6=sqrt(-(sum1/(2*a)));

     cout<<"The value of x1 is:"<<sum5<<"+"<<sum6<<"i"<<endl ;  // i= imaginary Number
     cout<<"The value of x2 is:"<<sum5<<"-"<<sum6<<"i" ;


  }
    return 0;

}
