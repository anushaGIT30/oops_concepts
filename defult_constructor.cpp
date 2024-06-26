#include<bits/stdc++.h>
using namespace std;
class student{
public:
int n;
string s;
string address;
public:
// default constructor
student(){

cin>>n;
cin>>s;
cin>>address;

}
void display(){
    cout<<n<<" "<<s<<" "<<address;
}
};
int main(){
    student s;
    s.display();
}
