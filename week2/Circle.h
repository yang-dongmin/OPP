#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
private:
    int radius; // 맴버 변
public:
    // 선언부

    Circle(); // 기본 생성자
    Circle (int r); // 매개변수 있는 생성자
    ~Circle(); // 소멸자
    double getArea(); // 맴버 함수 선언(프로토타입, 원형)수
    void setRadius(int r);
};

#endif