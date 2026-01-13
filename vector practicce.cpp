#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>temp(5);
    for(int i = 0;i<temp.size();i++)
    {
        int a;
        cout<<"Enter The value of vector: ";
        cin>>a;
        temp[i]=a;
    }
        for(int j=0;j<temp.size();j++)
        {
          cout<<temp[j]<<" ";
        }
    return 0;
}
