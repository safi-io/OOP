#include<iostream>
using namespace std;

// Another Way to Solve Ambiguity is by using the concepts of Virual Classes as shown below!

class Student {
    protected:
        int rollNo;
    public:
        void setRollNo(int x) {
            rollNo = x;
        }
        void printRollNo() {
            cout << "Your Roll No. is :: " << rollNo << endl;
        }
};

class Academics : public virtual Student {
    protected:
        int marks;
    public:
        void setMarks(int x) {
            marks = x;
        }
        void printMarks() {
            cout << "Your marks is :: " << marks << endl;
        }
};

class Sports : public virtual Student {
    protected:
        int score;
    public:
        void setScore(int x) {
            score = x;
        }
        void printScore() {
            cout << "Your Score is :: " << score << endl;
        }
};

class Result : public Academics, public Sports {
    protected:
        int result;
    public:
        void printResult() {
            result = score + marks;
            Student :: printRollNo();
            Academics :: printMarks();
            Sports :: printScore();
            cout << "Your Result is :: " << result;
        }
};

int main() {
    Result safi;
    safi.setRollNo(273);
    safi.setMarks(9);
    safi.setScore(7);
    safi.printResult();
    return 0;
}