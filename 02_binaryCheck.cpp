#include<iostream>
#include<string>

using namespace std;

class binary {
	string inputUser;
	public :
		void display();
		void checker();
		void complement();
};

void binary :: display() {
	cout << "Enter a Binary Number :: ";
	cin>>inputUser;
}

void binary :: checker() {
	bool flag = true;
	for(int i=0; i< inputUser.length(); i++){
		if(inputUser.at(i) != '0' && inputUser.at(i) != '1') {
			cout << "It's not Binary Number.";
			flag = false;
			break;
		}
	}
	if(flag == true) {
		cout << "It's a Binary Number" <<endl;
		complement();
	}
}

void binary :: complement() {
	for(int i=0; i<inputUser.length(); i++) {
		if(inputUser.at(i) == '0') {
			inputUser.at(i) = '1';
		}
		else {
			inputUser.at(i) = '0';
		}
	}
	cout << inputUser;
}

using namespace std;
int main () {
	binary b;
	b.display();
	b.checker();
	return 0;
}