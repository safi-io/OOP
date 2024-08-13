#include<iostream>
using namespace std;

class numbers {
	int a,b;
	public:
		numbers(int x,int y) {
			a = x;
			b = y;
		}
		numbers(int y) {
			a = 0;
			b = y;
		}
		void printNumbers() {
			cout << "The value of a is :: "<<a<<" and the value of b is :: "<<b;  
		}
};

int main() {
	// construtor can be overload, and will work with respect to given arguments.
	numbers a = numbers(2,3);
	a.printNumbers();
	cout << endl;
	numbers b = numbers(8);
	b.printNumbers();
	
	return 0;
}
