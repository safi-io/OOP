#include<iostream>
using namespace std;

class Vehicle { // First Class (BASE-CLASS).
    protected:
        int tyres;
};

class Car : public Vehicle { // Second Class derived from First.
    protected:
        int seating_capacity;
};

class four_by_four : public Car { // Third class derived from second which also contains methods of first. 
    protected:
        int power;
    public:
        four_by_four(int tyresData, int seating_capacityData, int powerData) {
            tyres = tyresData;
            seating_capacity = seating_capacityData;
            power = powerData;
        }

        void printData() {
            cout << tyres << " " << seating_capacity << " " << power;
        }
};

int main() {
    
    four_by_four fortuner(4,7,100);
    fortuner.printData();

    return 0;
}