#include <iostream>
using namespace std;
#include "Circle.h"
//구현부
Circle::Circle():radius(1){
    cout<<"기본 생성자 호출"<<endl;
};
Circle::Circle(int r){
    radius=r;
    cout<<"매개변수 있는 생성자 호출. "<<"반지름 : "<<radius<<endl;
}
Circle::~Circle(){
    cout<<"소멸자 호출. "<<"반지름 : "<<radius<<endl;
}
void Circle::setRadius(int r){
    if(r<=0){
        cout<<"반지름은 양수이어야 합니다. 반지름을 1로 설정합니다."<<endl;
        r=1;
    }
    radius=r;
}
int Circle::getRadius(){
    return radius;
}

double Circle::getArea(){   //Circle 클래스의 getArea 멤버 함수 구현
    return 3.14*radius*radius;
}
