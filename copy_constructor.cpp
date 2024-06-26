#include <iostream>
using namespace std;

class student {
public:
    int no;
    string s;
    int age;
    string city;

    // Parameterized constructor
    student(int roll, string name, int a, string c) {
        no = roll;
        s = name;
        age = a;
        city = c;
    }

    // Copy constructor
    student(const student &st) {
        no = st.no;
        s = st.s;
        age = st.age;
        city = st.city;
    }

    void display() {
        cout << no << " " << s << " " << age << " " << city << endl;
    }
};

int main() {
    int n;
    string student_name;
    int b;
    string ci;

    // Input values for the first student
    cout << "Enter roll number, name, age, and city for the first student: ";
    cin >> n >> student_name >> b >> ci;

    // Create the first student object using the parameterized constructor
    student s1(n, student_name, b, ci);

    // Create the second student object using the copy constructor
    student s2(s1);

    // Display details of both student objects
    cout << "Details of first student:" << endl;
    s1.display();

    cout << "Details of copied student:" << endl;
    s2.display();

    return 0;
}
