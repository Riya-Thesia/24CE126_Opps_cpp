#include<iostream>
using namespace std;

class BankAccount
{
    public:
    string Name;
    int Account_Number;
    double Balance;


void input()
{
    cout<<"Account Holder's Name:";
    cin>>Name;

    cout<<"Account Number:";
    cin>>Account_Number;

    Balance=0;

}

private:
void deposit(double amount)
{
    Balance+=amount;
    cout<<"Amount added successfully"<<endl;
    cout<<"Update balance"<<endl;
}

void Withdraw(double amount)
{
    if(Balance<amount)
    {
       cout<<"Error:Balance is not sufficient"<<endl;
    }
    else
    {
        Balance-=amount;
        cout<<"Amount withdraw successfully"<<endl;
        cout<<"Balance remaining"<<Balance;
    }
}

public:
    void display()
    {
        deposit(5000);
        Withdraw(100);
        cout<<"Balance:"<<Balance;
    }
};

int main()
{
    BankAccount B;
    B.input();
    B.display();
    return 0;
}

/*Design a simple class BankAccount to represent a bank account. It should have
the following:
Attributes:
o Account holder's name, account number, and balance.
Methods:
o deposit(amount): to add money to the account.
o withdraw(amount): to deduct money from the account if sufficient balance
exists. Otherwise, print an error message.
o display_balance() to show the current balance.
Requirements:
o Demonstrate object-oriented principles: encapsulation and abstraction.
o Test the class by creating multiple accounts and performing operations.*/

