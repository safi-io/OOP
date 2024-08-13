#include<iostream>
using namespace std;


class shop {
	int itemId[100];
	int itemPrice[100];
	int counter;
	public :
		void initCounter() {
			counter = 1;
		}
		void setPrice();
		void displayPrice();
};

void shop :: setPrice() {
	cout << "Enter the Item ID of product at " << counter << " :: "; 
	cin >> itemId[counter];
	cout << "Enter the Item Price of product at " << counter << " :: "; 
	cin >> itemPrice[counter];
	counter++;
}

void shop :: displayPrice() {
	for(int i=1; i<counter; i++) {
		cout << "The price of the item with ID "<<itemId[i]<<" is :: "<<itemPrice[i] << endl;
	}
}


int main () {
	
	shop dukan;
	dukan.initCounter();
	
	int count;
	cout << "Enter no. of Products you want to Enter :: "; cin>>count;
	for(int i=1; i <=count; i++) {
		dukan.setPrice();
	}
	
	dukan.displayPrice();
	
	return 0;
}