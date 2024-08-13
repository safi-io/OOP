#include<iostream>
using namespace std;

typedef class student {
	int marks;
	int age;
	public:
		void getMarks(int marksFromUser);
		void getAge(int age);
		friend void print(student safi);
}st;

void student :: getMarks(int marksFromUser) {
	marks = marksFromUser;
}



void print(student safi){
	cout << "The age of the student is :: " << safi.age << " and marks are :: " << safi.marks <<endl;
}


int main () {
	
	st safi;
	safi.getMarks(90);
	safi.getAge(18);
	
	print(safi);
	
	return 0;
}

void student :: getAge(int AgeFromUser) {
	age = AgeFromUser;
}