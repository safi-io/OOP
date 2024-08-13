#include<iostream>
#include<cmath>
using namespace std;

class Point {
	int a, b;
	public:
		Point(int, int);
		void displayPoint();
		friend void Distance(Point, Point);
		
};

Point :: Point(int x, int y) {
	a = x;
	b = y;
}

void Point :: displayPoint() {
	cout << "The Point is :: (" << a << ", " << b << ")"; 
}

void Distance(Point m, Point n) {
	int d = sqrt(pow(n.a - m.a,2)+pow(n.b- m.b,2));
	cout << endl << "The Distance is between two points :: " << d;
}

int main() {
	Point m(1,1);// IMPLICIT CALL
	m.displayPoint();
	
	cout << endl;
	
	Point n = Point(0,6);// EXPLICIT CALL
	n.displayPoint();
	
	Distance(m, n);
	
	return 0;
}