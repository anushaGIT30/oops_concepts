#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "The animal is making a sound." << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "The dog is barking." << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "The cat is meowing." << endl;
    }
};

void make_animal_sound(Animal* animal) {
    animal->sound(); // Calls the appropriate sound function based on the actual object type
}

int main() {
    Animal* a;
    Dog d;
    Cat c;

    // Demonstrating dynamic polymorphism
    a = &d;
    make_animal_sound(a); // Outputs: The dog is barking.
    
    a = &c;
    make_animal_sound(a); // Outputs: The cat is meowing.
//Animal* a1 = new Dog();
 //   Animal* a2 = new Cat();
 
 //make_animal_sound(a1);
   // make_animal_sound(a2);
   //a1->sound(); // Outputs: The dog barks.
  //  a2->sound(); // Outputs: The cat meows.
  //  delete a1;
   // delete a2;

    return 0;
}
