#include <string.h>
#include "Account.h"
#include <iostream>
using namespace std;

class Checking : public Account{
	private:
		float chargePerCheck;
		int numCheck;
		float numBalance;
	public:
		Checking();
		Checking(int acctNum, float b);
		Checking(int accountNum, float b, string custName, string custAddress);
		bool withdraw(int accountNum, float amount);
		bool deposit(int accountNum, float amount);
		void setAccount(int a);
		void setBalance(float b);
		void setC(string name, string address);
		int getAccountNum();
		float getBalance();
		virtual Customer getC();
		virtual void displayAccount();
};