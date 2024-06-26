#include<iostream>
using namespace std;
class student{
    //creating class
    public:
  int rollno;
  string name;
  int age;
  string city;

};
int main(){
    //creating objects to the class
    student s;
    s.rollno=1;
    s.age=21;
    s.name="anusha";
    cout<<s.rollno<<endl;
    cout<<s.name<<endl;
    cout<<s.age<<endl;


}