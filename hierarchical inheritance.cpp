//23070123007 aditya basak
//Aim:To study and implement Hierarchical Inheritance.
#include <iostream>
#include <string>

using namespace std;

// Parent Class-1
class Jeans {
public:
    string type[3]; 
    Jeans() {
        type[0] = "Bootcut";
        type[1] = "Wide Leg";
        type[2] = "Skinny";
    }

    void brand() {
        cout << "H&M - &Denim" << endl;
    }
};

// Child Class-1
class Bootcut : public Jeans {
public:
    string color; 
    Bootcut() {
        color = "Dark Blue";
    }
};

// Child Class-2
class WL : public Jeans {
public:
    string color;
    WL() {
        color = "Black";
    }
};

// Child Class-3
class Skinny : public Jeans {
public:
    string color; 
    Skinny() {
        color = "Grey";
    }
};

// Hierarchical Inheritance
int main() {
    Bootcut j1;
    cout << endl;
    j1.brand();
    cout << j1.type[0] << ": " << j1.color << endl;

    WL j2;
    cout << endl;
    j2.brand();
    cout << j2.type[1] << ": " << j2.color << endl;

    Skinny j3;
    cout << endl;
    j3.brand();
    cout << j3.type[2] << ": " << j3.color << endl;

    return 0;
}
//Output
/*
H&M - &Denim
Bootcut: Dark Blue

H&M - &Denim
Wide Leg: Black

H&M - &Denim
Skinny: Grey
*/