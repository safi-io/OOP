#include<iostream>
using namespace std;

// Private Members of the base class can't be derived.
// Default visibility mode is private.
// if public --- then public methods/functions of base class will go into public of derived class.
// if private --- then public methods/functions of base class, will go into private of derived class.
// Base class contructors are called first and then Derived class constructors are called
// Destructor is fully opposite
// If two methods have same name, then the derived class method will run first.

class employee {
    protected:
        int age;
        float salary;

        employee(int ageData, float salaryData){
            age = ageData;
            salary = salaryData;
        }
    public:
        void printData() {
            cout << "Here is the age :: " << age 
            << " and here is the salary :: " << salary << endl;
        }
};


class newEmployee : public employee {
    public:
        newEmployee(int ageData, float salaryData) : employee(ageData, salaryData) {}

}; 

int main() {
    newEmployee safi(18,54.2);

    safi.printData();

    return 0;
}
