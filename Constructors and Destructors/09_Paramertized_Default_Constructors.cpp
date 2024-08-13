#include<iostream>
using namespace std;

class complex {
	int num1, num2;
	public:
		complex(int, int); // Constructor Decleartion
		void printResult();
};

complex ::complex(int x, int y) { // Parametrized Constructor
	num1 = x;
	num2 = y;
}

void complex :: printResult() {
	cout << "The number is "<<num1<<" + "<<num2<<"i";
}

int main() {
	complex a(5,9); // Implicit Call
	a.printResult();
	
	cout << endl;
	
	complex b = complex(10,18); // Explicit Call
	b.printResult();
	
	return 0;
}