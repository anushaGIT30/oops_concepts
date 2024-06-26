#include<iostream>
using namespace std;
class employee{
    public:
    employee(){
        cout<<"constructor is invoked"<<endl;
    }
    ~employee(){
        cout<<"destructor is invoked"<<endl;
    }
};
int main(){
    employee e1;
    employee e2;
    
}