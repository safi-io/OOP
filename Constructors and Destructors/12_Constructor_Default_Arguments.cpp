#include<iostream>
using namespace std;

class simple {
	int num1, num2;
	public:
		void printData() {
		cout << "The value of num1, num2 is :: "<<num1<<", "<<num2;	
		}
		simple(int,int);
};

simple :: simple(int a, int b=69) {
	num1 = a;
	num2 = b;
}

int main() {
	simple yum(3); // Implicit Call
	yum.printData();
	return 0;
}
