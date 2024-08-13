#include<iostream>
using namespace std;

class shop {
	int itemId;
	int itemPrice;
	static int count;
	public:
		void getData();
		void printData();
};

void shop :: getData() {
	cout << "Enter the ID of the product :: ";
	cin >> itemId;
	cout << "Enter the Price of the product :: ";
	cin >> itemPrice;
	count++;
}

void shop :: printData() {
	cout << "The price of the product is "<<itemPrice<< 
	" and the ID is " << itemId<<". The number of the product is "<<count << endl;
}

int shop :: count;

int main () {
	int i; cout << "Enter No. of products you want to enter "; cin>>i;
	shop aliGS[i];
	
	int size = sizeof(aliGS)/sizeof(aliGS[0]);

	
	for(int i=0; i<size; i++) {
		aliGS[i].getData();
		aliGS[i].printData();	
	}
	
	return 0;
}