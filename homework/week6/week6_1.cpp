// 2023564058 양동민
#include <iostream>
using namespace std;

class Animal {
    // TODO: 멤버 변수 선언 (name, sound)
    string name;
    string sound;

public:
    // TODO: 생성자 작성 (초기화 리스트 활용)
    Animal(string n, string s){
        this -> name = n; 
        this -> sound = s;
    };
    void speak() {
        // TODO: "name: sound!" 출력
        cout << name << ": " << sound << "!" << endl;
    }
    string getName() { return name; }
};

class Dog : public Animal { // public 상속
    // TODO: 멤버 변수 (breed)
    string breed;

public:
    // TODO: 생성자 — Animal(n, "Bark") 호출
    Dog(string n, string b) : Animal(n, "Bark"){ 
        this -> breed = b;
    };
    void info() {
        // TODO: "name (breed)" 출력
        cout << getName() << " (" << breed << ")" << endl;
    }
};

int main() {
    Dog d("Rex", "Golden");
    d.speak();   // 출력: Rex: Bark!
    d.info();    // 출력: Rex (Golden)
}