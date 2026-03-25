#include <iostream>
#include "BankAccount.h"

int main(){
    string name;
    double balance, dep, wd;
    
    // 계좌 생성
    cout << "이름을 입력하세요 : ";
    cin >> name;
    cout << "초기 잔액을 입력하세요 : ";
    cin >> balance;
    BankAccount mybank(name,balance);

    //입금
    cout << "입금액을 입력하세요 : ";
    cin >> dep;
    mybank.deposit(dep);

    //출금
    cout << "출금액을 입력하세요 : ";
    cin >> wd;
    mybank.withdraw(wd);

    //잔액조회
    mybank.printInfo();
}