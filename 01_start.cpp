#include <iostream>
using namespace std;

typedef class student {
	public:
		string name;
		string fName;
		void setData(string name1, string fName1, string username1, long long password1);
		void printData();
	private:
		string username;
		long long password;
}st;


void student :: setData(string name1, string fName1, string username1, long long password1) {
	name = name1;
	fName = fName1;
	username = username1;
	password = password1;
}

void st :: printData() {
	cout << "Student Name is :: "<<name<<endl;
	cout << "Student's Father Name is :: "<<fName<<endl;
	cout << "Username Name is :: "<<username<<endl;
	cout << "Password is :: "<<password<<endl<<endl;
}

int main() {
	st safi;
	safi.setData("Safi","Imtiaz","safi228@",123456);
	safi.printData();
	
	st muzamil;
	muzamil.setData("Muzamil","Saleem","MuzamilFSD",654321);
	muzamil.printData();
	return 0;
}