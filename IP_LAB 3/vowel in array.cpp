#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Enter the size of array: ";
    cin>>n;

    char word[n];

    for(int i=0;i<n;i++)
     {
        cout<<"Enter the word["<<i<<"] : ";
        cin>>word[i];

     }

    cout<<"The vowels are: ";
    for(int i = 0; i < n; i++)
     {

        switch(word[i])
        {


            case 'a' :
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':

                cout << word[i]<<" ";

            break;

         }


     }


}

