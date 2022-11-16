#include <iostream>
using namespace std;

class Employee
{

 private:


    string name="";
    string year="";
    string salary="";
    string adress="";



public:

    void setname (string a)
    {
        name=a;
    }

    void setyear (string b)
    {
        year=b;
    }

    void setsalary (string c)
    {
        salary=c;
    }


    void setadress (string d)
    {
        adress=d;
    }


    string getname ()
    {
        return name;
    }

    string getyear ()
    {
        return year;
    }

    string getsalary ()
    {
        return salary;
    }

    string getadress ()
    {
        return adress;
    }





    void info()
    {
        cout<<name<<"      "<<year<<"              "<<salary<<"         "<<adress<<endl;
    }
};


int main()
{

    cout<<"name year of joining  salary        adress"<<endl;


    Employee Robert;
    Robert.setname("Robert");
    Robert.setyear("1994 ");
    Robert.setsalary("20000");
    Robert.setadress("64C- WallsStreat");
    Robert.info();

    Employee Sam;
    Sam.setname("Sam");
    Sam.setyear("2000");
    Sam.setsalary("30000");
    Sam.setadress("68D- WallsStreat");
    Sam.info();


    Employee John;
    John.setname("John");
    John.setyear("1999");
    John.setsalary("15000");
    John.setadress("26B- WallsStreat");
    John.info();

    return 0;
}


