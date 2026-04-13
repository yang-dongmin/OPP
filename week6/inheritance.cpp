#include <iostream>
using namespace std;

class A{
public:
    A(){cout << "생성자A" << endl;}
    A(int x){cout << "생성자A(" << x << ")" << endl;}
    ~A(){cout << "소멸자A" << endl;}
};
// class B : public A{
// public:
//     B(){cout << "생성자B" << endl;}
//     ~B(){cout << "소멸자B" << endl;}
// };
class C : public A{
public:
    C(){cout << "생성자C" << endl;}
    // A 생성자도 사용하기 위해 :A(x) (없으면 매개변수 없는 기본 생성자)
    C(int x):A(x*10){cout << "생성자C(" << x << ")" << endl;} 
    ~C(){cout << "소멸자C" << endl;}
};

int main(){
    C c(1);
}