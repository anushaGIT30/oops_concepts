#include<iostream>
using namespace std;
class circle{
    private:
    double radius;
    public:
    circle(double r){
        radius=r;
    }
    bool operator<(const circle &c ) const{
      return   radius<c.radius;
    }
    void display(){
        cout<<3.14*radius*radius <<endl;
    }
};
int main(){
    circle c1(2.0);
    circle c2(1.0);
    c1.display();
    c2.display();
     if (c1 < c2) {
        cout << "Circle c1 is smaller than Circle c2" << endl;
    } else {
        cout << "Circle c1 is not smaller than Circle c2" << endl;
    }
    
}