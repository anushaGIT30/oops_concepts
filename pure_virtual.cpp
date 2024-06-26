#include <iostream>
using namespace std;

class base {
    int x;
public:
    // Pure virtual function
    virtual void fun() = 0;

    int getx() {
        return x;
    }
};

class derived : public base {
    int y;
public:
    void fun() override {
        cout << "fun is called" << endl;
    }
};

int main() {
    derived d;
    d.fun();
    return 0;
}
