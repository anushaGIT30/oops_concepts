#include <iostream>
using namespace std;

class account {
public:
    float salary = 80000;
};

class employee : public account { // Use public inheritance
public:
    float bonous = 600000;
};

int main() {
    employee e;
    cout << e.salary << endl;
    cout << e.bonous << endl;

    return 0;
}
