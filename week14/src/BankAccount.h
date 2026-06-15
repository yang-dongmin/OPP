#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <stdexcept>

// 잔액 부족 시 throw되는 예외 클래스
class InsufficientFundsException : public std::runtime_error {
public:
    InsufficientFundsException()
        : std::runtime_error("Insufficient funds") { }
};

class BankAccount {
    int balance;
public:
    BankAccount() : balance(0) { }
    explicit BankAccount(int initialBalance) : balance(initialBalance) { }

    // 입금: 음수 금액은 무시
    void deposit(int amount) {
        if (amount > 0)
            balance += amount;
    }

    // 출금: 잔액 초과 시 InsufficientFundsException throw
    void withdraw(int amount) {
        if (amount > balance)
            throw InsufficientFundsException();
        balance -= amount;
    }

    int getBalance() const { return balance; }
};

#endif