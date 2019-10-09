// Bank Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Account.h"
#include "Bank.h"
#include "Customer.h"
#include "Checking.h"
#include "Savings.h"
#include <vector>

using namespace std;

int main()
{
	//variable declarations

	//customer information
	string name;
	string address;

	//account type to create - checking or savings
	bool checking;
	Checking ck;
	Savings  s;

	//opening balance
	float balance;

	//hold a collection of accounts
	vector<Account> AV;


	// Create 5 Accounts
	for (int i = 0; i < 5; i++)
	{

		cout << "Creating account " << i + 1 << endl << endl;

		//get customer information
		cout << "Enter name: " << endl;
		cin >> name;
		cout << "Enter street: ";
		cin >> address;

		//choose which type of account to create
		cout << "Checking (1) or Savings (0) (Enter 1 for Checking/Enter 0 for Savings)" << endl;
		cin >> checking;

		//Create checking account
		if (checking)
		{
			ck.setC(name, address);
			ck.setaccountNum(i);
			cout << "Enter Opening balance deposit for checking" << endl;
			cin >> balance;
			ck.setbalance(balance);
			ck.setchargePerCheck(.05);
			ck.setminBalance(100);
			ck.setnumCheck(1);
			AV.push_back(ck);
		}
		//Create savings account
		else
		{
			s.setC(name, address);
			s.setAccountNum(i);
			s.setInterestRate(0.10);
			cout << "Enter Opening balance deposit for savings" << endl;
			cin >> balance;
			s.setbalance(balance);
			AV.push_back(s);
		}

	}


	//Display all 5 Accounts
	for (int i = 0; i < AV.size(); i++)
	{
		AV[i].displayAccount();
		cout << endl;
	}

	return 0;


}
