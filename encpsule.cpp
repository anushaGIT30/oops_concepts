#include<iostream>
using namespace std;
class circle{
    int radius;
    float area;
    public:
    void getradius(){
        cout<<"enter the radius:"<<endl;
        cin>>radius;
    }
    void findArea(){
      area=3.14*radius*radius;
      cout<<area;
    }

};
int main(){
    circle c;
    c.getradius();
    c.findArea();
}