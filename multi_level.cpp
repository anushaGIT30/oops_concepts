#include<iostream>
using namespace std;
class animal{
    public:
    void eat(){
        cout<<"animal is eating"<<endl;
    }
};
class dog :public animal{
    public:
    void bark(){
        cout<<"dog is barking"<<endl;
    }
};
class babydog: public dog{
    public:
    void sleep(){
        cout<<"the dog is sleeping"<<endl;
    }
};
int main(){
    babydog d;
    d.bark();
    d.sleep();
    d.eat();
}