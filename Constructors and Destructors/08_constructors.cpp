#include<iostream>
using namespace std;

class student {
	float marks, totalMarks = 1000.0, percentage;
	public:
		student();
		void printResult();
		
};

student :: student() {
	marks = 72.0;
	percentage = (marks * 100.0) / totalMarks;
}

void student :: printResult () {
	cout << "The user marks are :: " << marks << " and user percentage is :: " << percentage  << "%";
}

int main () {
	student sam;
	sam.printResult();
	return 0;
}