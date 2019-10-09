#include <iostream>
#include <string.h>
using namespace std;

class Customer {
	private:
		string name;
		string address;
	public:
		Customer();
		Customer(string n, string a);
		string getName();
		void setName(string newName);
		string getAddress();
		void setAddress(string newAddress);
		void displayCustomer();

};
