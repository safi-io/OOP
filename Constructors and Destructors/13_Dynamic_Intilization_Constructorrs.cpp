#include<iostream>
using namespace std;

class grading {
	int obtainedMarks;
	double obtPercentage;
	int totalMarks;
	public:
		grading(); // Default and Blank Constructor
		grading(int obtMarks, int ttlMarks);
		grading(double percentage, int ttlMarks);
		void show();
};

grading :: grading(int obtMarks, int ttlMarks) {
	obtainedMarks = obtMarks;
	totalMarks = ttlMarks;
	obtPercentage = (obtainedMarks*100) / totalMarks;
}

grading :: grading(double percentage, int ttlMarks) {
	totalMarks = ttlMarks;
	obtPercentage = percentage;
	obtainedMarks = (obtPercentage/100) * ttlMarks;
}

void grading :: show() {
	cout << "Your obtained marks are :: " << obtainedMarks << " and total marks are :: "
	<< totalMarks << " and your percentage is :: " << obtPercentage << " %";
}


int main() {
	
	grading a = grading(981,1100); // Giving all int values
	a.show();
	cout << endl << endl;
	
	grading b = grading(89.1818,1100); // Giving first double and then int value
	b.show();
	return 0;
}
