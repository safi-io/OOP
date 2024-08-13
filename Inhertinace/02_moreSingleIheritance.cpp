#include<iostream>
using namespace std;

// By using, Protected access specifer methods, functions, decleations can be called in other derived classes.



class Human {
    protected:
        int age;
        string name;
};

class student : public Human {
    public:
        int marks;
        float percentage;
        student(int Userage, string Username, int Usermarks, float Userpercentage) {
            age = Userage;
            name = Username;
            marks = Usermarks;
            percentage = Userpercentage;
        }
        void printData() {
            cout << age << endl << name << endl << marks << endl << percentage;
        }
};


int main() {
    student safi(19,"safi",981,89.1);

    safi.printData();

    return 0;
}