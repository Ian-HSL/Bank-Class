#include <iostream>
#include <string.h>
#include "Customer.h"
using namespace std;

class Account {
	private:
		int accountNum;
		float balance;
	public:
		Account();
		Account(int acctNum, float b);
		Account(int accountNum, float b, string custName, string custAddress);
		virtual bool withdraw(int accountNum, float amount);
		virtual bool deposit(int accountNum, float amount);
		virtual void setAccount(int a);
		virtual void setBalance(float b);
		virtual void setC(string name, string address);
		virtual int getAccountNum();
		virtual float getBalance();
		virtual Customer getC();
		virtual void displayAccount();

};
