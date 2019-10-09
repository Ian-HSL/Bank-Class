#include "Account.h"
#include <iostream>
#include <string.h>
using namespace std;

Account::Account() {}

Account::Account(int acctNum, float b) : accountNum(acctNum), balance(b) {}

Account::Account(int acctNum, float b, string custName, string custAddress) : accountNum(acctNum), balance(b) {
	Customer customer(custName, custAddress);
}

bool Account::withdraw(int acctNum, float amount) {
	
} 