#include <iostream>
class Animal {
public:
    // Declare the speak method as virtual
    virtual void speak() {
        std::cout << "Animal makes a sound" << std::endl;
    }
};
class Dog : public Animal {
public:
    // Override the speak method in the Dog class
    void speak() override {
        std::cout << "Dog barks" << std::endl;
    }
};
class Cat : public Animal {
public:
    // Override the speak method in the Cat class
    void speak() override {
        std::cout << "Cat meows" << std::endl;
    }
};
void animalSpeak(Animal* animal) {
    animal->speak();
}

int main() {
    // Create instances of Dog and Cat
    Dog dog;
    Cat cat;

    // Call the speak method directly
    dog.speak(); // Output: Dog barks
    cat.speak(); // Output: Cat meows

    // Call the animalSpeak function with Dog and Cat instances
    animalSpeak(&dog); // Output: Dog barks
    animalSpeak(&cat); // Output: Cat meows

    return 0;
}

