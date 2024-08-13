#include<iostream>
using namespace std;

class B;

class A {
	int num;
	public: 
		void getNum(int temp) {
			num = temp;
		}
	friend void sum(A, B);
};

class B {
	int num2;
	public: 
		void getNum2(int temp) {
			num2 = temp;
		}
	friend void sum(A, B);
};

void sum(A hh , B gg) {
	cout << "The sum is :: " << hh.num + gg.num2;
}



int main() {
	A one;
	one.getNum(5);
	
	B two;
	two.getNum2(10);
	
	sum(one, two);
	
	return 0;
}