#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    // Constructor
    
    Rectangle(float l,float w){
        length=l;
        width=w;
    }

    // Overload the == operator
    bool operator==(const Rectangle &r) const {
        // Compare the areas of the two rectangles
        return (length * width) == (r.length * r.width);
    }

    // Method to display the rectangle dimensions
    void display() const {
        cout << "Length: " << length << ", Width: " << width << ", Area: " << (length * width) << endl;
    }
};

int main() {
    Rectangle rect1(4.0, 5.0); // Area = 20
    Rectangle rect2(2.0, 10.0); // Area = 20
    Rectangle rect3(3.0, 6.0); // Area = 18

    // Display the rectangles
    cout << "Rectangle 1: ";
    rect1.display();
    cout << "Rectangle 2: ";
    rect2.display();
    cout << "Rectangle 3: ";
    rect3.display();

    // Compare the areas using the overloaded == operator
    if (rect1 == rect2) {
        cout << "Rectangle 1 is equal to Rectangle 2 in area." << endl;
    } else {
        cout << "Rectangle 1 is not equal to Rectangle 2 in area." << endl;
    }

    if (rect1 == rect3) {
        cout << "Rectangle 1 is equal to Rectangle 3 in area." << endl;
    } else {
        cout << "Rectangle 1 is not equal to Rectangle 3 in area." << endl;
    }

    return 0;
}
