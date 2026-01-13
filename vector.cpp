#include<iostream>
#include<vector>
using namespace std;
class employee
{
    string name;
    double basic_salary;
    double bonus;
    double Total_bonus;

    public:
    employee(string name, double basic_salary , double bonus)
    {
        this->name=name;
        this->basic_salary=basic_salary;
        this->bonus=bonus;


    }

    void cal_bonus()
    {
        Total_bonus=basic_salary+bonus;
    }

    void display()
    {
       cout<<"Enter the name of Employee: "<<name<<endl;
       cout<<"Employee salary is: "<<basic_salary<<endl;
       cout<<"Employee bonus: "<<bonus<<endl;
       cout<<"Employee Total bonus:"<<Total_bonus<<endl;
    }
};

int main()
{
    int i;
    vector<employee>emp;
    emp.push_back(employee("Riya",15000,5000));
    emp.emplace_back("Shreeji",20000,5000);
    for(auto&i:emp)
    {
        i.cal_bonus();
        i.display();
    }
    return 0;

}
