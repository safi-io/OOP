#include<iostream>
using namespace std;

/*
Case 1:
class B : public A {}; // Order of execution of constructor will be :-
First Base class then derived class.

Case 2:
class B : public A, public C {}; // Order of execution of constructor will be :-
Depends upon order. First A and then C

Case 3:
class B : public A, public virutal C {}; // Order of execution of constructor will be:-
First Base class, and in base class, Virtual Class will be Preferreed.
*/


class First {
    public:
    int hello;
        First() {
            cout << " First" << endl;
        }
};

class Second{

    public:
        Second(){
            cout << " Second" << endl;
        }
};

class Third : public Second, public First
 {
    public:
        Third(){
            cout << " Third" << endl;
        }
};

int main() {
    system("CLS");
    Third obj;

    return 0;
}