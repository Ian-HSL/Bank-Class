#include <string.h>
#include <iostream>
using namespace std;

class Bank {
	private:
		string name;
		int routingNum;
	public:
		Bank();
		Bank(string n, int routingNum);
		int createAccount(string n, string address, float balance);
		bool deleteAccount(int account);
		void setName(string n);
		string getName();
		void setRoutingNum(int num);
		int getRoutingNum();
		void DisplayBank();

};