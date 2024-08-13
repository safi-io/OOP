#include<iostream>
using namespace std;

/*
In Multilevel Inheritance, One class derives methods, functions from other class,
and then another class derives methods and functions from that class.

---On the other hand---
In Multiple Inherince, Class C inherits methods and functions from Class A and B at a 
same time.

*/

class technology {
    protected:
        int code;
};

class phone {
    protected:
        string type;
};
// Constructor will be called on the first basis.....
// In this example, technology constructor will be called first and then phone
class iphone : public technology, public phone {
    private:
        int model;
    public:
        iphone(int codeData, string typeData, int modelData) {
            code = codeData;
            type = typeData;
            model = modelData;
        }
        void printData();
};

void iphone :: printData() {
    cout << code << " " << type << " " << model;
}

int main() {
    system("CLS");
    iphone X(8976, "touch-mobile", 10);
    X.printData();
    return 0;
}