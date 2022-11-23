#include<iostream>
#include<string.h>

using namespace std;

class Mobile
{
 private:
    string ownerName;
    string mobileNumber;
    float mobileBalance;
    string mobileOs;
    bool lockStatus;

 public:

    Mobile()
    {
        cout<<"Enter Your Name: ";
        cin>>ownerName;
        cout<<"Enter Your Mobile Number: ";
        cin>>mobileNumber;
        cout<<"Enter Your Mobile OS: ";
        cin>>mobileOs;

    }

    Mobile(float balance)
    {

        mobileBalance=balance;

    }
    ~Mobile()
    {

    }

    void ShowInfo()
    {
        cout<<"Enter Your Name: "<<ownerName<<endl;
        cout<<"Enter Your Mobile Number: "<<mobileNumber<<endl;
        cout<<"Enter Your Mobile OS:"<<mobileOs<<endl;


    }

    void showbalance()
    {

      cout<<"Your Mobile Balance is: "<<mobileBalance<<endl;
    }



        void Recharge(bool status,int amount)
        {
            if( status==0)

            {
                mobileBalance=mobileBalance+amount;
                cout<<"Your Recharge is successfull."<<endl;
            }

            else
            {
                cout<<"Your Phone is Locked.Please unlcok Your Phone.";
            }
        }



    void CallSomeone(int timeDuration)

    {
        mobileBalance= mobileBalance - (timeDuration*0.5);

    }
};


int main()
{
    Mobile user;

    int select;

    {
      do
      {

      cout<<"1. Show Info"<<endl;
      cout<<"2. Amount to Recharge"<<endl;
      cout<<"3. show balance"<<endl;
      cout<<"4. CallSomeone"<<endl;

      cout<<"Enter the selection from here: ";
      cin>>select;

          switch(select)
          {
            case 1:
                user.ShowInfo();
                break;

            case 2:

                {
                    float tk=0;
                    bool status;
                    cout<<"Enter your lock status 1(true) & false(0): ";
                    cin>>status;
                    cout<<"Enter your Recharge amount: ";
                    cin>>tk;
                     user.Recharge(status,tk);
                    }
                break;

             case 3:
                 user.showbalance();
                break;

            case 4:
                {   int timeDuration=0;
                    cout<<"Enter your calling time in mins:";
                    cin>>timeDuration;
                    user.CallSomeone(timeDuration);
                    break;
                }


          }

       }while(1);

    }

}
