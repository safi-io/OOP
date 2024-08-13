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
    int a;
        public:
        int hello;
            First(int x) {
                a = x;
                cout << a <<  " First" << endl;
            }
};

class Second{
    int b;
        public:
        Second(int y){
            b = y;
            cout << b << " Second" << endl;
        }
};

class Third : public Second, public First{
    int c,d;
    public:
        Third(int i, int j, int k, int l): First(i), Second(j){
            c = k;
            d = l;
            cout << k << " " << l << " Third" << endl;
        }
};

int main() {
    
    Third obj(10,20,30,40);
    return 0;
}