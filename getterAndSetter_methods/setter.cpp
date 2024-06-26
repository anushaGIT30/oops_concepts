// if we want to access the private member of the class we use setter function
#include <iostream>
#include <string>
#include <vector> // Include vector for dynamic size handling
using namespace std;

class student {
private:
    string name;
public:
    int marks;
    char ch;

    void setname(string s) {
        name = s;
    }

    void print() const {
        cout << name << " " << marks << " " << ch << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    vector<student> arr(n); // Use vector instead of array for dynamic size handling

    for (int i = 0; i < n; i++) {
        string s;
        cout << "Enter name, marks, and character for student " << i + 1 << ": ";
        cin >> s;
        arr[i].setname(s);
        cin >> arr[i].marks;
        cin >> arr[i].ch;
    }

    cout << "\nDetails of students:" << endl;
    for (int i = 0; i < n; i++) {
        arr[i].print();
    }

    return 0;
}
