#include <iostream>
using namespace std;

class Base
{
public:
    virtual void f() { cout << "Base::f() called" << endl; }
};

class Derived : public Base
{
public:
    virtual void f() { cout << "Derived::f() called" << endl; } // 함수 재정의
};

int main()
{
    Derived d;
    Derived *pDer = &d;
    pDer->f(); // Derived::f() 호출 (Derived* 타입이므로)

    Base *pBase = pDer; // 업캐스팅: 파생 → 기본 (항상 허용)
    pBase->f();         // Base::f() 호출! (Base* 타입이므로)
}