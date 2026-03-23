#include <iostream>
#include "Circle.h"
using namespace std;

int main(){
    Circle pizza(20), donut; // Circle 클래스의 객체 pizza 생성
    // donut.radius = 10; // 멤버 변수에 값 대입
    donut.setRadius(-15);
    cout << "피자의 면적은 " << pizza.getArea() << endl; // 멤버 함수 호출
    cout << "도넛의 면적은 " << donut.getArea() << endl; // 멤버 함수 호출
    return 0;
}
