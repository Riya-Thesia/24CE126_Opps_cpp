#include<iostream>
using namespace std;
int main()
{
    //Reverse numbers.
    int number,reversedNumber=0;
    cout<<"Number: ";
    cin>>number;

    while(number!=0)
    {
     reversedNumber *=10;
     //int lastDigit = number % 10;
     reversedNumber += number % 10;
     number /= 10;
    }
    cout<<"Reversed: "<<reversedNumber;
}
