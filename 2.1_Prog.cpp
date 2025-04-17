/*A local construction company frequently deals with rectangular plots and structures of varying
dimensions. To streamline their planning and estimation processes, the company requires a simple
system to manage and analyze rectangular shapes efficiently.
The system must be able to handle multiple rectangles, each with distinct dimensions. For each
rectangle, the length and width need to be defined and stored securely. Additionally, the company
needs the ability to calculate two key metrics for any given rectangle:
The area, to estimate usable space or material coverage. The perimeter, to estimate boundary lengths
or material requirements for edges. To make this system functional, there should be a way to define
or update the dimensions of any rectangle as required. The system should be capable of creating and
managing multiple rectangle records, performing calculations for each, and displaying the results
clearly for analysis and planning purposes.*/
#include<iostream>
using namespace std;
class rectangle
{
 float length,width;

 public:
     float perimeter()
     {
         return 2*(length+width);
     }
     float area()
     {
         return length*width;
     }
     void getdata()
     {
         cout<<"Enter the Length of the rectangle:";
         cin>>length;

         cout<<"Enter the width of the rectangle:";
         cin>>width;

     }
         void Area_per()
         {
             cout<<"Perimeter:"<<perimeter()<<endl;
             cout<<"Area:"<<area()<<endl;
         }
     void putdata()
     {
         cout<<"The Length of the rectangle is :"<<length<<endl;
         cout<<"The width of the rectangle is:"<<width<<endl;
         cout<<"Perimeter of the rectangle is:"<<perimeter()<<endl;
         cout<<"Area of the rectangle is:"<<area()<<endl;
     }
     };

     int main()
     {
        int n,i;
        cout<<"Enter the number of rectangles:";
        cin>>n;
        rectangle r[n];
        for(int i=0;i<n;i++)
        {
            r[i].getdata();
            r[i].Area_per();
        }
         for(int i=0;i<n;i++)
        {
            cout<<"rectangle "<<i+1<<endl;
            r[i].putdata();

        }
        cout<<endl<<"24CE126_Riya"<<endl;
        return 0;
     }
