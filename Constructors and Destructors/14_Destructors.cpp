#include<iostream>
using namespace std;

int count = 0; // Static Count

// Destructors don't get any arguments and not return...

class student {
	public:
		student() { // Default Constructor                                                                                 
			count++;
			cout << "Default Constructor Called for object number :: "<<count<<endl;
		}
		~student() { // Default Destructor
			cout << "Default Destructor Called for object numnber :: "<<count<<endl;
			count--;
		}
};


int main() {
	cout << "Entering Main Block...." << endl;
	student safi;

	{
		cout << "Entering the Block...." << endl;
		student ahmad, ali, aleena; // Making three objects
		cout << "Exiting the Block...." << endl; // Destructor for these three will be called here
	}

	cout << "Ending the main function...." << endl; // Destructor for the very first one will be called here

	return 0;
}
