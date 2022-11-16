#include<iostream>
using namespace std;

class Student {

 public:

    string name="John";
    int id=2222;

    void show(void)
    {
        cout<<"your name is: "<<name<<endl;
        cout<<"your id is: "<<id;
    }


};
  int main()
  {
      Student s1;

      s1.show();
  }
