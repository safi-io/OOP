#include<iostream>
using namespace std;

class maths {
    public:
    int calculator(int a) {
        return a + a;
    }
    int calculator(int a, int b) {
        return a + b;
    }
};

int main() {
    /*
    Function Overloading is basically two functions with same name,
    But They control of the program binds with the one in compile time(Early-Binding).
    */
    maths A;
    cout << A.calculator(11,2);
    return 0;
}