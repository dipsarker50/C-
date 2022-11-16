#include <iostream>
using namespace std;

class Rectangle
{

 private:
     int Length;
     int breadth;


public:

    void setlength (int a)
    {
        Length=a;
    }

    void setbreadth (int b)
    {
        breadth=b;
    }

    int gets1 ()
    {
        return Length;
    }

    int gets2 ()
    {
        return breadth;
    }




    void area()
    {
        int d=(Length*breadth);
        cout<<"Area is:"<< d;
    }
};


int main()
{
    int a,b;
    cout<<"Enter length and breadth: " ;

    cin>>a>>b;

    Rectangle t;
    t.setlength(a);
    t.setbreadth(b);
    t.area();
    return 0;
}
