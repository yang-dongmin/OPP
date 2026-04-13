// 2023564058 양동민
#include <iostream>
using namespace std;

class Shape {
protected:
    // TODO: int w, h 선언
    int w, h;
public:
    // TODO: 생성자
    Shape(int w, int h){ // w, h 초기화 
        this -> w = w;
        this -> h = h;
    }
};

class Rectangle : public Shape {
public:
    // TODO: 생성자 (Shape 생성자 호출)
    Rectangle(int w, int h) : Shape(w, h){ // Shape로 w, h 전달
    };
    int area() { return w * h; } // 넓이 구하기
};

class ColorRect : public Rectangle {
    string color;
public:
    // TODO: 생성자 (Rectangle 생성자 호출)
    ColorRect(int w, int h, string c) : Rectangle(w, h){ // Rectangle로 w, h 전달
        this -> color = c; // color 초기화
    };
    void show() {
        cout << color << " 사각형: " << area() << "cm²" << endl;
    }
};

int main() {
    ColorRect cr(4, 5, "Red");
    cr.show();   // 출력: Red 사각형: 20cm²
}