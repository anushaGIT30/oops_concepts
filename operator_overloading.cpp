#include <iostream>
using namespace std;

class point {
private:
    int x, y;

public:
    // Constructor
    point(int a,int b){
        x=a;
        y=b;
    }

    // Overload the + operator
    point operator+(const point &p) const {
        return point(x + p.x, y + p.y);
    }

    // Method to display the point
    void display() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    point p1(2, 3);
    point p2(4, 5);

    // Use the overloaded + operator to add two points
    point p3 = p1 + p2;

    // Display the results
    cout << "p1: ";
    p1.display();
    cout << "p2: ";
    p2.display();
    cout << "p1 + p2 = p3: ";
    p3.display();

    return 0;
}
