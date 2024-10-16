//23070123007 Aditya Basak
//Aim:To study and implement multiple Inheritance.
#include <iostream>
#include <string>

using namespace std;

// Parent Class-1
class Vehicle {
public:
    string company;
    Vehicle() {
        company = "Ford";
    }

    void type() {
        cout << "Mustang" << endl;
    }
};

// Parent Class-2
class Specs {
public:
    string mileage;
    Specs() {
        mileage = "8 kmpl";
    }

    void colour() {
        cout << "Grey" << endl;
    }
};

// Child Class-1 (derived from parent-1 & 2)
class Car : public Vehicle, public Specs {
public:
    string seater;
    Car() {
        seater = "4 seater";
    }
};

int main() {
    // Multiple Inheritance
    Car f2;
    f2.colour();
    cout << f2.company << " ";
    f2.type();
    cout << "(" << f2.seater << ")" << endl << "MILEAGE: " << f2.mileage << endl;

    return 0; 
}
//Output
/*Grey
Ford Mustang
(4 seater)
MILEAGE: 8 kmpl
*/
