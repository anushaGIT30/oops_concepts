#include<iostream>
using namespace std;
class animal{
    public:
    void eat(){
        cout<<"the animal is eating"<<endl;
    }

};
class dog : public animal{
    public:
    void bark(){
        cout<<"the dog is barking"<<endl;
    }
};
class cat: public animal{
    public:
    void meow(){
        cout<<"the cat is meow"<<endl;
    }
};
int main(){
    dog d;
    cat c;
    d.bark();
    c.meow();

}