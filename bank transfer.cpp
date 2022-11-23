#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

class Account
{
private:
    string accountName;
    int accountNumber;
public:
    Account()
       {

        accountName = "";
        accountNumber=0;
        }

  void setaccountDetails()
  {
      cout<<"Enter your Account Name: ";
      cin>>accountName;
      cout<<"Enter your Account Number: ";
      cin>>accountNumber;
  }

  void displayinfo()
    {
        cout<<"Your account Name: "<<accountName<<endl;
        cout<<"Your account Number: "<<accountNumber<<endl;
    }

private:
         float balance;

   public:

    Account(float a)
    {
        balance =a;

    }

    void displaybalance()
    {
        cout<<"your balance is: "<<balance<<endl;
    }

    void depositf(int amount)
    {

        balance= balance + amount;
    }

    void withdrawf (int amount)
    {

      balance= balance - amount;
    }


    void transferf (int amount,Account receiver)
    {

        balance= balance - amount;
        receiver.balance= receiver.balance + amount;

        cout<<"My Balance is: "<<balance<<endl;
        cout<<"Client user balance is: "<<receiver.balance<<endl;
     }
};



  int main(void)
  {


      Account user,receiver;

      //user.getaccountdetails();
      //user.displayinfo();




      //user.depositf();
      //user.displaybalance();
      //user.withdrawf ();

      int select;
    {
      do
      {

      cout<<"1. Register"<<endl;
      cout<<"2. show info"<<endl;
      cout<<"3. show balance"<<endl;
      cout<<"4. deposit"<<endl;
      cout<<"5. withdraw"<<endl;
      cout<<"6. transfer"<<endl;

      cout<<"Enter the selection from here: ";
      cin>>select;

          switch(select)
          {
            case 1:
                user.setaccountDetails();
                break;

            case 2:
                user.displayinfo();
                break;

            case 3:
                user.displaybalance();
                break;

            case 4:
                {   int amount=0;
                    cout<<"Enter withdraw amount:";
                    cin>>amount;
                    user.depositf(amount);
                    break;
                }
            case 5:
                {
                 int amount=0;
                 cout<<"Enter withdraw amount:";
                 cin>>amount;
                 user.withdrawf (amount);
                 break;
                }
            case 6:
                {
                int amount=0;
                cout<<"Enter transfer amount:";
                cin>>amount;
                user.transferf(amount,receiver);
                break;
                }

          }

       }while(1);

    }
}
