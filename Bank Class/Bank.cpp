#include "Bank.h"
#include "Account.h"
#include <iostream>
#include <string.h>
using namespace std;

Bank::Bank() {}

Bank::Bank(string n, int routingNum) : name(n), routingNum(routingNum) {}

int Bank::createAccount() {

}