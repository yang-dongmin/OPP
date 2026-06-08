#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

// 방법 1: runtime_error 상속 (가장 간단)
class InsufficientFundsException : public runtime_error {
    double balance;
    double amount;
public:
    InsufficientFundsException(double balance, double amount)
        : runtime_error("잔액이 부족합니다.")
        , balance(balance), amount(amount) { }

    double getBalance() const { return balance; }
    double getAmount()  const { return amount; }
};

// 사용 예시
class BankAccount {
    double balance;
public:
    BankAccount(double b) : balance(b) { }

    void withdraw(double amount) {
        if (amount > balance) {
            throw InsufficientFundsException(balance, amount);
        }
        balance -= amount;
    }

    double getBalance() const { return balance; }
};

int main() {
    BankAccount account(1000.0);

    try {
        account.withdraw(500);   // 정상
        cout << "잔액: " << account.getBalance() << endl;

        account.withdraw(800);   // 예외 발생
    }
    catch (const InsufficientFundsException& e) {
        cout << e.what() << endl;
        cout << "현재 잔액: " << e.getBalance()
             << ", 요청 금액: " << e.getAmount() << endl;
    }
}