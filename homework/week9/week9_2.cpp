#include <iostream>
using namespace std;

class Account{
protected:
    double balance;
    string owner;
public:
    // 생성자
    Account(string owner, double initialBalance){
        this -> owner = owner;
        this -> balance = initialBalance;
    }

    // 가상 소멸자
    virtual ~Account(){};

    // 순수 가상 함수
    virtual void deposit(double amount) = 0;
    virtual void withdraw(double amount) = 0;

    void printBalance(){
        cout << "계좌주: " << owner << ", 잔액: " << balance << endl;
    }
};

class SavingsAccount : public Account{
    double interestRate; // 이자율
public:
    SavingsAccount(string owner, double initialBalance, double interestRate) : Account(owner, initialBalance){
        this -> interestRate = interestRate;
    }
    void deposit(double amount) override{ // override 명시
        balance += amount;
    }
    void withdraw(double amount) override{
        if (balance >= amount)
        {
            balance -= amount;
        } else{
            cout << "잔액 부족" << endl;
        }
        
    }
};

class CheckingAccount : public Account{
    double overdraftLimit; // 한도
public:
    CheckingAccount(string owner, double initialBalance, double overdraftLimit) : Account(owner, initialBalance){
        this -> overdraftLimit = overdraftLimit;
    };
    void deposit(double amount) override{
        balance += amount;
    }
    void withdraw(double amount)override{
        if (balance - amount >= -overdraftLimit)
        {
            balance -= amount;
            cout << amount << "원 인출" << endl;
        } else{
            cout << "한도초과" << endl;
        } 
    }
};

int main(){
    // Account* 배열
    Account* ac[] = {
        new SavingsAccount("홍길동",1000,0.05), 
        new CheckingAccount("김철수",200,500)
    };
    ac[0]->deposit(300);
    ac[0]->withdraw(1500);
    ac[0]->printBalance();

    ac[1]->deposit(200);
    ac[1]->withdraw(500);
    ac[1]->printBalance();
    
    // 메모리 배열 해제
    for(int i = 0; i < 2; i++){
        delete ac[i];
    }
}