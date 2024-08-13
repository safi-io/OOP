#include<iostream>

/* Ambiguity happens when a derived class has more than one method and functions
of the same name. I will resolve it in the derived class named as company.
Ambiguity must be done in the derived class with public access specifier.
*/

/* Ambiguity can automatically resolve when the derived class has the same name 
of the method or the function.
*/


class employee {
    public:
        void hello() {
            std::cout << "Hello Hello From Employee" << "\n";
        }
};

class boss {
    public:
        void hello() {
            std::cout << "Hello Hello From Boss" << "\n";
        }
};

class company : public employee, public boss {
    public:
        void hello() {
            boss :: hello();
        }
};


int main() {
    company safi;
    safi.hello();

    return 0;
}