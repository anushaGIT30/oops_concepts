#include<iostream>
using namespace std;
class employee{
    public:
    int emp_id;
    string emp_name;
    string emp_address;
    float salary;
    //parameterized constructor
    public:
employee (int id,string name,string address,float s){
   emp_id=id;
   emp_name=name;
   emp_address=address;
   salary=s;
}

void display(){
    cout<<emp_id<< " "<<emp_name<<" "<<emp_address<<" "<<salary;

}
};
int main(){
/*employee e1=employee(101,"anusha","hyderabd",10000);
employee e2=employee(102,"bala","pune",500);
e1.display();
e2.display();
*/
//to get the input from the user
int id;
string name;
string add;
float salary;
cin>>id>>name>>add>>salary;

int id1;
string name2;
string add2;
float salary2;
cin>>id1>>name2>>add2>>salary2;
employee e1=employee(id,name,add,salary);
employee e2=employee(id1,name2,add2,salary2);
e1.display();
e2.display();

}