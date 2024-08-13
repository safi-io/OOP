#include<iostream>
using namespace std;

// Define a class named Complex to represent complex numbers
class Complex {
    int real, img; // Private members to store real and imaginary parts of the complex number
    public:
        Complex() {} // Default constructor
        Complex(int r, int i) { // Parameterized constructor to initialize real and imaginary parts
            this->real = r;
            this->img = i;
        }
        void display() { // Method to display the complex number
            cout << real << "+" << img << "i" << endl;
        }
        
        // Overloading the '+' operator to perform addition of two complex numbers
        Complex operator +(Complex &passer) { 
            Complex result; // Create a new Complex object to store the result
            result.real = real + passer.real; // Add real parts
            result.img = img + passer.img;    // Add imaginary parts
            return result; // Return the result
        }
};

int main() {
    // Create a Complex object A1 with real part 3 and imaginary part 4
    Complex A1(3,4);
    A1.display(); // Display A1
    
    // Create a Complex object A2 with real part 7 and imaginary part 2
    Complex A2(7,2);
    A2.display(); // Display A2

    // Add A1 and A2 using overloaded '+' operator and store the result in A3
    Complex A3 = A1 + A2;
    A3.display(); // Display the result A3
    
    return 0;
}
