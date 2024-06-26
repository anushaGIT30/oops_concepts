#include<iostream>
using namespace std;

class company {
private:
    string company_name;

protected:
    int company_id;

public:
    void details() {
        company_name = "tcs";
        company_id = 2345;
    }

    friend class FriendClass; // Declare FriendClass as a friend
};

class FriendClass {
public:
    void showDetails(company &c) {
        // Since FriendClass is a friend of company, it can access private and protected members
        cout << "Company Name: " << c.company_name << endl;
        cout << "Company ID: " << c.company_id << endl;
    }
};

int main() {
    company comp;
    comp.details();
    
    FriendClass fc;
    fc.showDetails(comp); // Use the friend class to display details
    
    return 0;
}

