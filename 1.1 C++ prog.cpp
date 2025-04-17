/*A bank wants to create a simple system to manage customer bank accounts. The system should
allow customers to perform basic banking operations such as depositing money, withdrawing
money, and checking their account balance.
Each bank account will need to have an account holder's name, a unique account number, and
a balance. Deposits should increase the account balance, while withdrawals should only be
allowed if there are sufficient funds in the account. If an attempt is made to withdraw more
money than is available, an error message should be displayed. Customers should also have the
ability to view their account balance whenever required.
The system must be designed using Object-Oriented Programming principles, focusing on
creating a simple and efficient solution to manage the accounts effectively. The system should
ensure that all account details are secure and accessible only through authorized methods.*/

#include<iostream>
using namespace std;
class  bank
{
public :
    string name;
    double anum;
    float balance;

    void deposit( )
    {
        float bl;
        cout << "Enter the amount you want to add :";
        cin >> bl;
        balance+=bl;

        cout <<"You'r successfully add amount in your account."<<endl;
        cout << "Your current balance is : "<<balance <<endl;
    }

    void withdraw(float x )
    {
        balance -= x;
        if(balance <0)
        {
            cout << "You have not enough amount for withdraw ."<<endl;
        }
        else
        cout << "You'r successfully withdraw your amount ." << endl<<"Current balance is : "<<balance<<endl ;
    }


    void Balance ()
    {
        cout << "Your current balance is : "<<balance <<endl;
    }
};

int main()
{
    int n,p=0;
    double num,a;
    short int c;
    cout << "How many account you want to create : ";
    cin >>n;
    class bank b[n];

    for(int i=0; i<n;i++)
    {
        cout <<"--------------------------------------------------------"<<endl;
        cout <<i+1<<") Enter bank account holder name : ";
        cin >>b[i].name;

        cout <<i+1<<") Enter bank account number : ";
        cin >>b[i].anum;

        cout <<i+1<<") Enter bank account Balance : ";
        cin >>b[i].balance;
    }

    x:
        cout <<"--------------------------------------------------------"<<endl;
        cout <<"Enter choice "<<endl<<"1) deposit "<<endl<<"2) withdraw"<<endl<<"3) check the balance"<<endl<<"4) exit "<<endl<< endl;
        cout <<"Enter choice: ";
        cin >>c;

        cout <<"--------------------------------------------------------"<<endl;
    switch(c)
    {
    case 1:
        cout<<"Enter bank account number :";
        cin >>num;

        for(int i=0;i<n;i++)
        {
            if(b[i].anum==num)
            {
                p++;
                b[i].deposit( );
                break;
            }
        }
        if(p==1)
        {
            cout<<"This account number has not available."<<endl;
        }

        p=0;
        goto x;
        break;

        case 2:
        cout<<"Enter bank account number :";
        cin >>num;
        for(int i=0;i<n;i++)
        {
            if(b[i].anum==num)
            {
                p++;
                cout << "Enter the amount you want to withdraw :";
                cin >> a;
                b[i].withdraw(a);
                break;
            }
        }
        if(p==1)
            cout<<"This account number has not available."<<endl;
        p=0;
        goto x;
        break;

        case 3:
        cout<<"Enter bank account number :";
        cin >>num;
        for(int i=0;i<n;i++)
        {
            if(b[i].anum==num)
            {
                p++;
                cout << "Your current amount is :"<<b[i].balance<<endl;
                break;
            }
        }
        if(p==1)
            cout<<"This account number has not available."<<endl;
        p=0;
        goto x;
        break;

        case 4:
        cout <<"Thank you !!";
        break;

        default :
        cout <<"please enter valid choice .";
        goto x;
    }
return 0;
}
