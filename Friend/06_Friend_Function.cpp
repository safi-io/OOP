#include<iostream>
using namespace std;

class shop {
	int number;
	float size;
		public:
			void getNumber(int number2) {number = number2;}
			void getSize(int size2) {size = size2;}
			friend class shopPrint;
};

class shopPrint {
	public :
		void print(shop aliGS) {
			cout << "The number of the shop is :: "<<aliGS.number<<" and size of shop is :: "<<aliGS.size;
		}
};

int main () {
	shop aliGS;
	aliGS.getNumber(10);
	aliGS.getSize(150);
	
	shopPrint temp;
	temp.print(aliGS);

	return 0;
}