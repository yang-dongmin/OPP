// 원 클래스 만들기
#include <iostream>
using namespace std;
#include "Circle.h"


// class Circle
// {
// private:
//     int radius; // 맴버 변
// public:
//     // 선언부

//     Circle(); // 기본 생성자
//     Circle (int r); // 매개변수 있는 생성자
//     ~Circle(); // 소멸자
//     double getArea(); // 맴버 함수 선언(프로토타입, 원형)수
//     void setRadius(int r);
// };

// 구현부
Circle::Circle():Circle(1){
    cout << "기본 생성자 호출" << endl;
}
Circle::Circle(int r){
    radius = r;
    cout << "매개변수 있는 생성자 호출" << "반지름 : " << radius << endl;
}
Circle::~Circle(){
    cout << "소멸자 호출. " << "반지름 : " << radius << endl;
}
void Circle::setRadius(int r){
    if(r<=0){
        cout << "반지름 값은 양수이어야 합니다. 반지름을 1로 설정합니다." << endl;    
        r = 1;
    }
    radius = r;
}
double Circle::getArea(){ // Circle 클래스의 getArea 멤버 함수 구현
    return 3.14 * radius * radius;
}

// int main(){
//     Circle pizza(20), donut; // Circle 클래스의 객체 pizza 생성
//     // donut.radius = 10; // 멤버 변수에 값 대입
//     cout << "피자의 면적은 " << pizza.getArea() << endl; // 멤버 함수 호출
//     cout << "도넛의 면적은 " << donut.getArea() << endl; // 멤버 함수 호출
//     return 0;
// }