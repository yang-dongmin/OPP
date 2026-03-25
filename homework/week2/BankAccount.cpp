#include <iostream>
#include "BankAccount.h"

BankAccount::BankAccount(string name, double initialBalance){
    ownerName = name;
    if(initialBalance < 0)
    {
        balance = 0.0;
        cout << "[계좌 생성] " << name << ", 초기 잔액: " << balance << "원 -> 0원으로 보정" << endl;
        cout << endl;
    }
    else
    {
        balance = initialBalance;
        cout << "[계좌 생성] " << name << ", 초기 잔액 : " << balance << "원" << endl;
        cout << endl;
    }
}

void BankAccount::deposit(double amount){
    if(amount <= 0){
        cout << "[오류] 입금액은 0보다 커야 합니다." << endl;
        cout << endl;
    }
    else{
        balance += amount;
        cout << "[입금] " << amount << "원 입금 완료" << endl;
        cout << endl;
    }
}

void BankAccount::withdraw(double amount){
    if(amount <= 0){
        cout<<"[오류] 출금액은 0보다 커야 합니다."<<endl;
        cout << endl;
    }
    else if (amount > balance)
    {
        cout << "[오류] 잔액이 부족합니다. (현재 잔액 : " << 
        balance << "원, 출금 요청 : " << 
        amount << "원)" << endl;
        cout << endl;
    }
    else{
        balance -= amount;
        cout << "[출금] " << amount << "원 출금 완료" << endl;
        cout << endl;
    }
}

double BankAccount::getBalance() const{
    return balance;
}
string BankAccount::getOwnerName() const{
    return ownerName;
}
void BankAccount::printInfo() const{
    cout << "[잔액 조회] " << ownerName << "님의 잔액 : " << balance << "원" << endl;
}