#include<iostream>
using namespace std;

/* 
Initlization List in constructors is used to initizae and values with-out
writing them in constructor body.
*/

class university {
    int a,b;
    public:
        university(int i, int j) : a(i), b(j) {
            // a = i; b = j; 
            cout << "University Constructor Called.." << endl
                 << a << " " << b << endl;
        }
};


int main() {
    university COMSATS(15,30);
    return 0;
}