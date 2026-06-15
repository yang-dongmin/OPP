#include <iostream>
#include "test_BankAccount.cpp"

int main() {
    cout << "=== BankAccount 테스트 ===\n";
    test_initialBalance_shouldBeZero();
    test_deposit_shouldIncreaseBalance();
    test_withdraw_shouldDecreaseBalance();
    test_withdraw_overBalance_shouldThrowException();
    test_withdraw_exactBalance_shouldSucceed();
    test_deposit_zeroAmount_balanceUnchanged();
    cout << "=== 테스트 완료 ===\n";
}