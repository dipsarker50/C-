#include <iostream>
using namespace std;

class Student
{

 private:


    int roll;
    string phone="";
    string adress="";



public:

    void setroll (int a)
    {
        roll=a;
    }

    void setphone (string b)
    {
        phone=b;
    }

    void setadress (string c)
    {
        adress=c;
    }


    int getroll ()
    {
        return roll;
    }

    string getphone ()
    {
        return phone;
    }

    string getadress ()
    {
        return adress;
    }





    void info()
    {
        cout<<roll<<endl;
        cout<<phone<<endl;
        cout<<adress<<endl;

    }
};


int main()
{


    Student sam;
    sam.setroll(1);
    sam.setphone("011");
    sam.setadress("mymensingh");
    sam.info();

    Student John;
    John.setroll(2);
    John.setphone("012");
    John.setadress("Dhaka");
    John.info();
    return 0;
}

