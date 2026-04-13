#include <iostream>
using namespace std;

class Point{
    int x,y; // 접근 : private
public:
    void set(int x, int y){
        this -> x = x;
        this -> y = y;
    };
    void showPoint(){
        cout << "(" << x << ", " << y << ")" << endl; 
    }
};
// Point를 상속받은 ColorPoint 클래스
class ColorPoint : public Point{
    string color;
public:
    void setColor(string c){
        this->color = c;
    }
    void showColorPoint(){
        cout << color << " : ";
        showPoint();
    }
};

int main(){
    ColorPoint cp;
    ColorPoint *pDer = &cp;

    // up casting
    Point *pBase = pDer;

    pDer -> set(3,4);
    pBase -> showPoint();
    pDer -> setColor("yellow");
    pBase -> showPoint();
    pDer -> showColorPoint();

    // down casting
    ColorPoint *pDown = (ColorPoint*)pBase; 
    pDown -> showColorPoint();
}