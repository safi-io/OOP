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
        void getData(void) {
            cout << "ID of the product is :: " << Id <<
            " and Price of the product is :: " << Price << endl;
        }
};



int main() {
    int size = 2, i = 0, inId;
    float inPrice;

    Store *ptr = new Store [size];

    Store *tempPtr = ptr;

    for(; i<size; i++) {
        cout << "Enter the ID of the product "<< i+1 << " :: ";
        cin >> inId;
        cout << "Enter the Price of the product "<< i+1 << " :: ";
        cin >> inPrice;
        ptr->setData(inId, inPrice);
        ptr++;
    }

    for(i = 0; i<size; i++) {
        tempPtr->getData();
        tempPtr++;
    }




    return 0;
}