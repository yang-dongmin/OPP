#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
using namespace std;

class BankAccount {
private:
    string ownerName;
    double balance;
public:
    BankAccount(string name, double initialBalance);
    void deposit(double amount);
    void withdraw(double amount);
    double getBalance() const;
    string getOwnerName() const;
    void printInfo() const;
};

#endif