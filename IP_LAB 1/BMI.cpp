#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float BMI,m,h;

    cout<<"Enter you mass: ";
    cin>>m;

    cout<<"Enter you hieght: ";
    cin>>h;

    BMI=m/(h*h);

    cout<<"Your BMI is: "<<BMI;

    return 0;

}
