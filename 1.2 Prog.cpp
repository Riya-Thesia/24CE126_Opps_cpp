/*A small retail store is facing challenges in managing its inventory effectively. The store sells a
variety of products, each identified by a unique product ID, a name, the available quantity in
stock, and the price per unit. To streamline their operations, the store needs a basic system to
manage this inventory efficiently.
The system must provide the ability to add new products to the inventory, ensuring that each
product has its ID, name, quantity, and price properly recorded. Additionally, the system should
allow the store staff to update the quantity of any existing product, such as when new stock
arrives or when items are sold.
Another essential feature of the system is the calculation of the total value of all products in
the inventory, which is determined by multiplying the quantity of each product by its price and
summing these values for all products.
The store management is exploring two approaches for this system: a procedural approach and
an object-oriented approach. The goal is to evaluate these approaches by comparing their ease
of implementation, code reusability, and overall complexity.
The system's design and implementation should consider these requirements and provide an
effective solution (either procedural approach or an object-oriented approach) to the store's
inventory management problems.*/
#include<iostream>
using namespace std;

class product
{
    string name;
    int quantity;
    double Price;

public:
    int id;

void product_info()
{
    cout<<"Enter your name";
    cin>>name;
    cout<<"Enter product id";
    cin>>id;
    cout<<"Enter the quantity of the product";
    cin>>quantity;
    cout<<"Enter the Price of the product";
    cin>>Price;

}

void addproduct(int x)
{
 quantity += x;
           if(quantity<0)
           {
               cout << "Sorry !! ,Not enough quantity in your inventory ." << endl
}

void Update_quantity(int quantity)
{

}

void total_value(double Price,int quantaty)
{
    int total_value = 0;
    total_value = quantaty * Price ;

}
};
int main()
{
 int a,c=0,id;
    float cost =0;
    cout << "How many different product in your inventory : ";
    cin >> a;
    product s[a];
    for(int i=0;i<a;i++)
    {
        cout <<"------------------------------------------------------------"<<endl;
        cout<<"            --- Enter your "<<i+1<<" product data --- "<<endl;
        cout <<"------------------------------------------------------------"<<endl;
        s[i].add( );
    }
    x:
        cout << "------------------------------------------------------------"<<endl;
        cout<< "Choice "<<endl<<"1) Update the quantity of an existing product."<<endl<< "0) exit" <<endl<<"Enter your choice  : ";
        cin >>c;
        if(c==1)
        {
            cout << "Enter the ID of the product you want to update : ";
            cin >>id;
            for(int i=0;i<a;i++)
            {
                if(id==s[i].id)
                {
                    int q;
                    cout << "Enter the quantity of this product : ";
                    cin >> q;
                    s[i].update(q);
                    break;
                }
            }
            c=0;
            goto x;
        }

        for(int i=0;i<a;i++)
        {
            cost += s[i].cost();
        }

        cout << "------------------------------------------------------------"<<endl;
        cout << "Your total Bill is : "<<cost<<endl<<"Thank you purchase product ."<<endl;
        cout << "------------------------------------------------------------"<<endl;

        

    return 0;
}
