#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string w,m;
    int a;

    cout<<"How many characters: ";
    cin>>a;
    cout<<"Must have character: ";
    cin>>m;
    cout<<"Write your answer: ";
    cin>>w;

    int b=w.length();
    int c= w.find(m);

    if(b==a)
    {
        if(c>=0)
        {
            cout<<"Your given word "<<w<<" has "<<b<< " characters"<<" and character "<<m;
        }

        else if(c<0)
        {
           cout<<"Your given word "<<w<<" has "<<b<< " characters"<<" but doesn't have character "<<m;
        }

    }

    else
        cout<<"your given size & character size doesn't match.";


    return 0;

}
