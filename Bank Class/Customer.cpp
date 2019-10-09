#include <iostream>
#include <string.h>
#include "Customer.h"
using namespace std;

Customer::Customer() {}

Customer::Customer(string n, string a) : name(n), address(a) {}

string Customer::getName() {
	return name;
}

void Customer::setName(string newName) {
	name = newName;
}

string Customer::getAddress() {
	return address;
}

void Customer::setAddress(string newAddress) {
	address = newAddress;
}

void Customer::displayCustomer() {
	cout << "Customer: " << name << endl << "Address: " << address << endl;
}