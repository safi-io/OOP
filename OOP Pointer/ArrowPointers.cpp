#include<iostream>
using namespace std;

class Store {
    int Id;
    float Price;
    public:
        void setData(int a, float b) {
            Id = a;
            Price = b;
        }
        void printData(void) {
            cout << "ID of the product is :: " << Id <<
            " and Price of the product is :: " << Price << endl;
        }
};


int main() {
    Store FSD;

    Store *ptr = &FSD; // Saving Address of the class in a variable
    ptr->setData(1001,45.7); // Arrow operator


    // Diffrenet Ways, Same results
    (*ptr).printData();
    // ptr->printData();


    return 0;
}