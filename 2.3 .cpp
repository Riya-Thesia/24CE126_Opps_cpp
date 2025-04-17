/*In a growing city, a newly established bank sought to streamline its operations by implementing a
digital system to manage customer accounts. The management envisioned a system where each
account would store details about the account holder, their unique account number, and the current
balance. To ensure flexibility and accuracy, they required functionalities for creating accounts with
varying initial balances, depositing money, withdrawing funds (with checks for sufficient balance), and
generating detailed account summaries.
The bank's IT team faced the challenge of developing a robust solution. They began by sketching out
the essential features of the system. The team highlighted that new accounts could be created in two
ways: one with no initial balance, and another with specified account details and a starting amount.
Additionally, they recognized the need for reliable mechanisms to handle deposits and withdrawals,
ensuring proper validation to prevent overdrafts. Displaying account details in a clear format was also
prioritized for customer communication.
To ensure scalability, the team decided to simulate the system by creating multiple accounts using the
proposed methods. They tested various scenarios, such as depositing and withdrawing different
amounts, handling edge cases like insufficient funds, and verifying that the account summaries were
accurate. This iterative approach helped them refine the system and ensure its readiness for
deployment.*/
#include<iostream>
#include<string>
using namespace std;
class Bank
{

    string name;
    double balance;
    double AccNumber;
    public:
    Bank ()
    {
        name="default name";
        balance =0;
        AccNumber=0;

    }
    Bank(string N,double M,double Ac)
    {

        name=N;
        balance=M;
        AccNumber=Ac;
    }
   void withdraw(double amount)
    {
        if(amount>0)
        {

            balance-=amount;
            cout<<"withdraw succesfully:";
            cout<<balance;
        }
        else
        {
            cout<<"enter valid amount"<<endl;
            }
        }
      void  deposite(double amount)
    {
        balance+=amount;
        cout<<"Deposit money successfully:"<<balance;

    }
    void display()
    {
       cout<<"Your name: "<<name<<endl;
       cout<<"Your current balance: "<<balance;

    }
};
int main()
{
   string N;
   double M;
   double Ac;
  cout<<"Enter your name:";
  cin>>N;
  cout<<"Enter balance:";
  cin>>M;
  cout<<"Enter Account number:";
  cin>>Ac;
  Bank B( N, M, Ac);




  X:
  int choice;
  cout<<endl<<"Enter 1 withdraw"<<endl;
  cout<<"Enter 2 deposite"<<endl;
  cout<<"Enter 3 display Account"<<endl;
  cout<<"Enter 4 exit"<<endl;
  cout<<"Enter your choice:";
  cin>>choice;

  while(true)
  {

  switch(choice)
  {

       case 1:
        {double amount;
            cout <<"Enter the amount you want to withdraw:";
            cin >> amount;
            B.withdraw(amount);
            cout <<endl<<"--------------------------------------";
            goto X;
        }

        case 2:
        {
            double amount;
            cout <<"Enter the amount you want to deposit:";
            cin >> amount;
            B.deposite(amount);
            cout <<endl<<"--------------------------------------";
            goto  X;
        }

        case 3:
        {
            B.display();
            cout <<endl<<"--------------------------------------";
            goto X;
        }

        case 4:
        cout <<"Exiting the program."<< endl;
        cout <<endl<<"--------------------------------------";
           return 0;

        default:
            cout <<"Invalid choice. Please try again."<< endl;
        }
        cout<<endl<<"24Ce126_Riya_Thesia"<<endl;
        return 0;

  }
}
