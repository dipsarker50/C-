#include<iostream>
using namespace std;

int main()

{
    int number;
    cout<<"Input Marks: ";
    cin>>number;


    if(number>=90&& number<=100)
    {
        cout<<"Your Grade is A+";
        cout<<"Your Grade point is 4";
    }
    else if(number>=85 && number<=89)
        {
            cout<<"Your Grade is A";
            cout<<"Your Grade point is 3.75";
        }

    else if(number>=80 && number<=84)
    {
        cout<<"Your Grade is B+";
        cout<<"Your Grade point is 3.5";
    }

    else if(number>=75 && number<=79)
    {
        cout<<"Your Grade is B";
        cout<<"Your Grade point is 3.25";
    }

    else if(number>=70 && number<=74)
    {
        cout<<"Your Grade is C+";
        cout<<"Your Grade point is 3.00";
    }

    else if(number>=65 && number<=69)
    {
        cout<<"Your Grade is C";
        cout<<"Your Grade point is 2.75";
    }

    else if(number>=60 && number<=64)
    {
        cout<<"Your Grade is D+";
        cout<<"Your Grade point is 2.5";
    }

    else if(number>=50 && number<=59)
    {
        cout<<"Your Grade is D";
        cout<<"Your Grade point is 2.25";
    }

    else if(number>=0 && number<=49)
    {
        cout<<"Your Grade is F";
        cout<<"Your Grade point is 0.00";
    }

    else

    cout<<"Invaild Mark";







}

