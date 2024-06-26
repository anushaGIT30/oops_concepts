#include<iostream>
using namespace std;
class employee{
    public:
    int emp_id;
    string name;
    float salary;
    employee(int emp_id,string name,float salary){
        this->emp_id=emp_id;
        this->name=name;
        this->salary=salary;
    }
    void display(){
        cout<<emp_id<<endl;
        cout<<name<<endl;
        cout<<salary<<endl;
    }
};
int main(){
    employee e1=employee(101,"anusha",900000);
    employee e2=employee(102,"balamani",9000);
    e1.display();
    e2.display();
    
}