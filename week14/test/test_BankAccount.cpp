#include <iostream>
#include "../src/BankAccount.h"
using namespace std;

// 테스트 함수 이름: test_[무엇을]_[어떤상황에서]_[기대결과]
void test_initialBalance_shouldBeZero() {
    // Arrange (준비)
    BankAccount acc;

    // Act (실행)
    int balance = acc.getBalance();

    // Assert (검증)
    if (balance == 0)
        cout << "[PASS] 초기잔액은_0이어야_한다\n";
    else
        cout << "[FAIL] 초기잔액은_0이어야_한다"
             << " (기대: 0, 실제: " << balance << ")\n";
}

void test_deposit_shouldIncreaseBalance() {
    // Arrange
    BankAccount acc(1000);

    // Act
    acc.deposit(500);

    // Assert
    if (acc.getBalance() == 1500)
        cout << "[PASS] 입금하면_잔액이_증가한다\n";
    else
        cout << "[FAIL] 입금하면_잔액이_증가한다"
             << " (기대: 1500, 실제: " << acc.getBalance() << ")\n";
}

void test_withdraw_shouldDecreaseBalance() {
    BankAccount acc(1000);
    acc.withdraw(300);

    if (acc.getBalance() == 700)
        cout << "[PASS] 출금하면_잔액이_감소한다\n";
    else
        cout << "[FAIL] 출금하면_잔액이_감소한다"
             << " (기대: 700, 실제: " << acc.getBalance() << ")\n";
}
// 예외가 발생하는지 검증
void test_withdraw_overBalance_shouldThrowException() {
    BankAccount acc(500);

    try {
        acc.withdraw(1000);   // 예외가 발생해야 함
        // 예외가 발생하지 않으면 FAIL
        cout << "[FAIL] 잔액초과_출금시_예외가_발생한다 (예외 없음)\n";
    }
    catch (const InsufficientFundsException&) {
        // 예외가 잡히면 PASS
        cout << "[PASS] 잔액초과_출금시_예외가_발생한다\n";
    }
}
// 경계값: 딱 잔액만큼 출금
void test_withdraw_exactBalance_shouldSucceed() {
    BankAccount acc(1000);
    acc.withdraw(1000);   // 경계값

    if (acc.getBalance() == 0)
        cout << "[PASS] 잔액과_같은_금액은_출금가능하다\n";
    else
        cout << "[FAIL] 잔액과_같은_금액은_출금가능하다"
             << " (기대: 0, 실제: " << acc.getBalance() << ")\n";
}

// 경계값: 0원 입금
void test_deposit_zeroAmount_balanceUnchanged() {
    BankAccount acc(1000);
    acc.deposit(0);

    if (acc.getBalance() == 1000)
        cout << "[PASS] 0원_입금시_잔액변화없다\n";
    else
        cout << "[FAIL] 0원_입금시_잔액변화없다"
             << " (기대: 1000, 실제: " << acc.getBalance() << ")\n";
}