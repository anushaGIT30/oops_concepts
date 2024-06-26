#include<iostream>
using namespace std;
class emp{
    string name;
    public:
    int id;
    int salary;
    emp(string name1,int id1,int salary1){
        name=name1;
        id=id1;
        salary=salary1;
    }
    void getname(string s){
        cout<<name;
    }
    void print(){
        cout<<name<<" "<<id<<" "<<salary<<" ";
    }

    
};
int main(){
    emp e1("anu",1,90000);
    e1.print();
}