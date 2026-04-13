#include <iostream>
using namespace std;

class Base{
    int a;
protected:
    void setA(int a){this -> a = a;}
public:
    void showA(){
        cout << "base class" << endl;
    }
};
class Derived : private Base{
    int b;
protected:
    void setB(int b){this -> b = b;}
public:
    void showB(){
        showA(); // 여기서는 가능
        cout << "drived class" << endl;
    }
};

int main(){
    Derived x;
    // x.a; // 애초에 private라서 접근 불가
    // x.setA(5); // protected라서 public 상속을 받아도 못씀
    // x.setB(10); // protected라서 해당 클래스지만 외부에서 사용 불가(클래스 내에서 가능)
    // x.b = 10; // private라서 접근 불가
    // x.showA(); // private 상속이라서 못씀
    x.showB(); // 사용 가능
}