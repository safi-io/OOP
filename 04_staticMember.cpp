#include<iostream>
using namespace std;

// Use of Static Members and Functions

typedef class employee {
		int age;
		string name;
		static int count;

	public :
		void addInfo();
		void displayInfo();
		static void getCount() {
			cout << count << " : this is the employee number." << endl;
		}
} ep;

void ep :: addInfo() {
	cout << "Enter the employe Name :: ";
	cin >> name;
	cout << "Enter the employe Age :: ";
	cin >> age;
	count++;
}

void ep :: displayInfo() {
	cout << name << " is your employee." << endl;
	cout << age << " years old." << endl;
}

int ep :: count;

int main() {
	ep ali, ahmad;

	
	ali.addInfo();
	ali.displayInfo();
	ep::getCount();
	
	ahmad.addInfo();	
	ahmad.displayInfo();
	ep::getCount();

	return 0;
}