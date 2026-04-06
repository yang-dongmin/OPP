#include <iostream>
using namespace std;

class Person{
public:
    int money = 1000; // 개인 돈
    void addMoney(int money); // 저금

    static int sharedMoney; // 공금
    static void addShared(int n); // 기부
};
int Person::sharedMoney = 10000; // static은 초기값 지정해서 다시 선언
void Person::addMoney(int m){
    this -> money += m;
}
void Person::addShared(int m){
    sharedMoney += m;
}

int main(){
    Person p1, p2;
    p1.addMoney(300);
    p2.addMoney(2000);

    cout << "p1.money :" << p1.money << endl;
    cout << "p2.money :" << p2.money << endl;

    cout << "sharedmoney :" << p1.sharedMoney << endl;

    p1.addShared(300);

    cout << "sharedmoney :" <<Person::sharedMoney << endl;

    p2.addShared(1000);

    cout << "sharedmoney :" <<Person::sharedMoney << endl;
}