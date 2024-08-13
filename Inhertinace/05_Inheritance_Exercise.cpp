#include<iostream>
#include<cmath>
using namespace std;

class normalCalculator{
    protected:
        int num1,num2,add,subtract,multiply,divide;
    public:
        normalCalculator(int num1Data, int num2Data) {
            num1 = num1Data;
            num2 = num2Data;

            add = num1+num2;
            subtract = num1-num2;
            multiply = num1*num2;
            divide = num1/num2;
        }
        void displayNormal() {
            cout << add << " " << subtract << " " << multiply << " " << divide << endl;
        }
};

class scientific {
    protected:
        int num3, square, power2, cube;
    public:
        scientific(int num3Data) {
            num3 = num3Data;

            square = sqrt(num3);
            power2 = pow(num3,2);
            cube = cbrt(num3);
        }
    void displayScientific() {
            cout << square << " " << power2 << " " << cube << endl;
        }
};

class hybridCalculator : public normalCalculator, public scientific {
    public:
        hybridCalculator(int num1Data, int num2Data, int num3Data) : normalCalculator(num1Data, num2Data), scientific(num3Data){ }
        void display() {
            normalCalculator :: displayNormal();
            scientific :: displayScientific();
        }
};


int main() {
    hybridCalculator A1(10,5,16);
    A1.display();

    return 0;
}