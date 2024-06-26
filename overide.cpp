#include <iostream>
using namespace std;

class Vehicle {
public:
    // Regular function (not virtual)
    void showDetails() {
        cout << "This is a vehicle" << endl;
    }
};

class Car : public Vehicle {
public:
    // Override the showDetails function
    void showDetails() {
        cout << "This is a car" << endl;
    }
};

class Bike : public Vehicle {
public:
    // Override the showDetails function
    void showDetails() {
        cout << "This is a bike" << endl;
    }
};

void displayVehicleDetails(Vehicle &vehicle) {
    vehicle.showDetails();
}

int main() {
    Vehicle v;
    Car c;
    Bike b;

    // Calling the showDetails function through base class references
    displayVehicleDetails(v); // Output: This is a vehicle
    displayVehicleDetails(c); // Output: This is a vehicle
    displayVehicleDetails(b); // Output: This is a vehicle

    return 0;
}
