// // C++ Program to demonstrate the
// // functioning of a friend class
// #include <iostream>
// using namespace std;

// class GFG {
// private:
//     int private_variable;

// protected:
//     int protected_variable;

// public:
//     GFG()
//     {
//         private_variable = 10;
//         protected_variable = 99;
//     }

//     // friend class declaration
//     friend class F;
// };

// // Here, class F is declared as a
// // friend inside class GFG. Therefore,
// // F is a friend of class GFG. Class F
// // can access the private members of
// // class GFG.
// class F {
// public:
//     void display(GFG& t)
//     {
//         cout << "The value of Private Variable = "
//              << t.private_variable << endl;
//         cout << "The value of Protected Variable = "
//              << t.protected_variable;
//     }
// };

// // Driver code
// int main()
// {
//     GFG g;
//     F fri;
//     fri.display(g);
//     return 0;
// }
// #include <iostream>

// class Animal {
// public:
//     virtual void sound() {
//         std::cout << "Animal makes a sound" << std::endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void sound() override {
//         std::cout << "Dog barks" << std::endl;
//     }
// };

// int main() {
//     Animal* animal = new Dog();
//     animal->sound();  // Output: "Dog barks"
//     return 0;
// }
#include <iostream>
using namespace std;

template <typename T>
class Base {
public:
    virtual void show(const T& data) = 0;  // Pure virtual function
    virtual ~Base() {}  // Virtual destructor
};

template <typename T>
class Derived : public Base<T> {
public:
    void show(const T& data) override {  // Overriding the pure virtual function
        cout << "Derived class: " << data << endl;
    }
};

void display(Base<double>& obj, const double& data) {  // Pass by reference
    obj.show(data);
}

int main() {
    Derived<double> derivedObj;
    display(derivedObj, 123.45);  // Calls the Derived class's show method
   
    return 0;
}
