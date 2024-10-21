
#include <iostream>
#include <string>
using namespace std;
class Person{
    protected:
    string name;
    int age;
    public:
    void get_input(){
        cout<<"Enter name: ";
        cin.ignore();
        getline(cin, name);
        cout<<"Enter age: ";
        cin>>age;
    }
    void di
    
};
class Employe: public Person{
    protected:
    int emp_id;
    public:
    void getid(){
        cout<<"Enter Employe id: ";
        cin>>emp_id;
    }
    
};
class contact: public Employe{
    protected:
    string email;
    int phone;
    public:
    void get_c(){
        cout<<"Enter Email: ";
        cin>>email;
        cout<<"Enter Phone number: ";
        cin>>phone;
    }
};

class Manager: public contact{
    protected:
    string dept;
    public:
    void get_d(){
        cout<<"Enter Department: ";
        cin>>dept;
    }
    void display(){
        "Email: "<<email<<endl<<
        "Phone: "<<phone<<endl<<
        "emp_id"<<emp_id<<endl<<
        "DepT: "<<dept<<endl;
    }
};

int main() {
    Manager m;
    cout<<"Enter Person's detail: ";
    m.get_input();
    cout<<"Enter Employe's detail: ";
    m.getid();
    cout<<"Enter Contact detail: ";
    m.get_c();
    m.get_d()
    
    return 0;
}
