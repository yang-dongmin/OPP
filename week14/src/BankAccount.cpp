#include <iostream>
#include "BankAccount.h"
using namespace std;

int main(){
    // 계좌 개설시 잔액 초기화 테스트 - 초기 잔액은 0원
    BankAccount acc;
    // 잔액
    int balance = acc.getBalance();
    // 검증 
    if(balance == 0){
        cout << "[성공] 초기 잔액은 0원이어야 함" << endl;
    }else{
        cout << "[실패] 초기 잔액은 0원이어야 함" << endl;
    }
}