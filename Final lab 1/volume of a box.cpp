#include <iostream>
using namespace std;

class Box
{

 private:
     int Length;
     int breadth;
     int height;


public:

    void setlength (int a)
    {
        Length=a;
    }

    void setbreadth (int b)
    {
        breadth=b;
    }

    void setheight (int c)
    {
        height=c;
    }


    int gets1 ()
    {
        return Length;
    }

    int gets2 ()
    {
        return breadth;
    }

    int gets3 ()
    {
        return height;
    }




    void volume()
    {
        int d=(Length*breadth*height);
        cout<<"volume is:"<< d;
    }
};


int main()
{
    int a,b,c;
    cout<<"Enter length, breadth and height: " ;

    cin>>a>>b>>c;

    Box t;
    t.setlength(a);
    t.setbreadth(b);
    t.setheight(c);
    t.volume();
    return 0;
}

