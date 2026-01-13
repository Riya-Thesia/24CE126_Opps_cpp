#include <iostream>
#include <vector>
using namespace std;

class Student {
protected:
    float marks;
public:
    void setMarks(float m)
    { marks = m; }
    virtual void computeGrade() const = 0;
    virtual ~Student() {}
};

class Undergraduate : public Student {
public:
    void computeGrade() const override {
        if (marks >= 85) cout << "Undergraduate Grade: A"<<endl;
        else if (marks >= 70) cout << "Undergraduate Grade: B"<<endl;
        else if (marks >= 50) cout << "Undergraduate Grade: C"<<endl;
        else cout << "Undergraduate Grade: F";
    }
};

class Postgraduate : public Student {
public:
    void computeGrade()
    const override {
        if (marks >= 90) cout << "Postgraduate Grade: A"<<endl;
        else if (marks >= 75) cout << "Postgraduate Grade: B"<<endl;
        else if (marks >= 60) cout << "Postgraduate Grade: C"<<endl;
        else cout << "Postgraduate Grade: F"<<endl;
    }
};

int main() {
    vector<Student*> students;

    int n;
    cout<<"Enter number of students: ";
        cin >> n;

        for(int i =0;i<n;i++)
        {
            int type;
            float m;
            cout<<"\nEnter student type !1 for UG,2 for PG: ";
            cin>>type;

            cout<<"Enter marks:";
            cin>>m;
            Student* s= nullptr;
            if(type == 1)
            {
                s=new Undergraduate();
            }
            else if(type == 2)
            {
                s=new Postgraduate();
            }
            else{
                cout<<"Invalid student type. Skipping.....\n";
                continue;
            }
            s->setMarks(m);
            students.push_back(s);
        }

    return 0;
}
