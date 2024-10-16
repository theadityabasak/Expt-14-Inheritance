//23070123007 Aditya Basak
//Aim:To study and implement Single Inheritance.
#include <iostream>
#include <string>

using namespace std;

class Uni {
public:
    string uni; 
    Uni() : uni("Symbiosis: ") {}

    void discipline() {
        cout << "Engineering" << endl;
    }
};

class Dep : public Uni {
public:
    string dept;
    Dep() : dept("Electronics & Communication") {}
};

int main() {
    Dep u1; 
    u1.discipline(); 
    cout << u1.uni + u1.dept << endl; 
    return 0; 
}
//Output
/*Engineering
Symbiosis: Electronics & Communication
*/
