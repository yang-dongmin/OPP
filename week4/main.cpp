#include <iostream>
#include "Circle.h"
#include "Person.h"
using namespace std;

void increase(Circle c){
    int r = c.getRadius();
    c.setRadius(r+1);
}

void increase_addr(Circle *c){
    int r = c->getRadius(); // 포인터는 . 대신 ->(화살표)
    c->setRadius(r+1);
}

Circle getCircle(){ // 객체 리턴
    Circle tmp(30);
    return tmp; // tmp의 복사본이 반환
}

Circle readRadius(Circle &c){
    int r;
    cout << "반지름 입력 : ";
    cin >> r;
    c.setRadius(r);
    return c;
}

int main(){
    Person father(1, "Kitae");
    Person son(father);
    father.show();
    son.show();

    son.changeName("Tom");
    cout << "아들의 이름 바꿈" << endl;
    father.show();
    son.show();

    // Circle donut;
    // readRadius(donut);
    // cout << "donut의 면적 = " << donut.getArea() << endl;

    // Circle c;
    // c = getCircle();
    // cout << c.getArea() << endl;

    //Circle waffle(30);
    //increase_addr(&waffle);
    //cout << waffle.getRadius() << endl;
    return 0;
}
