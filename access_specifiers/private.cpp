#include<iostream>
using namespace std;
class teacher{
    private:
    int id;
    string name;
    string sub;
    public://if the constructor is private then we use friend function to access the function
teacher(int id1,string name1,string sub1){
    id=id1;
    name=name1;
    sub=sub1;
}  
void print(){
    cout<<id<<" "<<name<<" "<<sub;
}  
};
int main(){
    teacher t= teacher(1,"anusha","data structures");
    t.print();
}