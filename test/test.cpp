#include <iostream>
#include <string>
using namespace std;

class Device {
protected: string brand;
public:
    Device(string b) : brand(b) {}
    void powerOn() { cout << brand << " 전원 ON\n"; }
};

class Phone : virtual public Device {
public:
    Phone(string b) : Device(b) {}
    void call() { cout << brand << " 통화\n"; }
};

class Camera : virtual public Device {
public:
    Camera(string b) : Device(b) {}
    void shoot() { cout << brand << " 촬영\n"; }
};

class SmartPhone : public Phone, public Camera {
public:
    // virtual 상속 시 가장 파생된 클래스가 직접 기본 클래스 생성자를 호출
    SmartPhone(string b) : Device(b), Phone(b), Camera(b) {}
    void selfie() { shoot(); }
};

int main() {
    SmartPhone sp("Samsung");
    sp.powerOn();   // Samsung 전원 ON (한 번만 출력됨)
    sp.call();      // Samsung 통화
    sp.selfie();    // Samsung 촬영
}
