#include<iostream>
using namespace std;

class mobile {
    int a, b;
    public:
        mobile(int a, int b) {

            /*
            This keyword is used to refer the instance variable,
            not the local variable
            */ 
            
            this->a = a;
            this->b = b;
        }
        void printData() {
            cout << a << " " << b;
        }
};

int main() {

    mobile iphone(1,2);
    iphone.printData();
    
    return 0;
}