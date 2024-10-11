#include <iostream>
using namespace std;
class Basic{
    protected:
    string name;
    long phon;
    int emp_id;
    public:
    void get_d(string n, long a, float i){
        name=n;
        phon=a;
        emp_id=i;
    }
};

class Department_info{
    protected:
    string dept_name;
    int no_task;
    int time_t;
    public:
    void get_dt(string d, int tk, int tt){
        dept_name= d;
        no_task= tk;
        time_t= tt;
    }
};

class Employee: public Basic, public Department_info{
    public:
    void display(){
        cout<<"Details of Employee: "<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Phone: "<<phon<<endl;
        cout<<" Employee Id: "<<emp_id<<endl;
        cout<<"Deparment-->"<<endl;
        cout<<"Department Name: "<<dept_name<<endl;
        cout<<"No. of tasks assigned: "<<no_task<<endl;
        cout<<" Time Have "<<time_t<<" days."<<endl;
    }
};

int main(){
    Employee E;
    string name;
    cout<<"Enter name: ";
    cin>>name;
    E.get_d(name, 9343231313, 7);
    E.get_dt("Agriculture", 10, 2);
    E.display();
    return 0;
}

