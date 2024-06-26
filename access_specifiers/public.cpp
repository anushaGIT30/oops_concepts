
#include<iostream>
using namespace std;
class family{
    public:
    string name;
    int age;
    bool gender;
family(){
// cout<<"enter the name:"<<endl;
 cin>>name;
 //cout<<"enter age:"<<endl;
 cin>>age;
 //cout<<"enter the gender:";
 cin>>gender;
} 
void print(){
    cout<<name<<endl;
    cout<<age<<endl;
    cout<<gender<<endl;
}   
};
int main(){
    family f;
   // f.name="anusha";
   // f.age=21;
   // f.gender=1;
    f.print();
}