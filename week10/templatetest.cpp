#include <iostream>
using namespace std;

// void myswap(int& a, int& b) {
//     int tmp;
//     tmp = a;
//     a = b;
//     b = tmp;
// }

// void myswap(double& a, double& b) {
//     double tmp;
//     tmp = a;
//     a = b;
//     b = tmp;
// }

class Circle
{
    int radius;

public:
    Circle(int radius = 1) { this->radius = radius; }
    int getRadius() { return radius; }
};

template <class T>
void myswap(T &a, T &b)
{
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int a = 5, b = 10;
    cout << "a = " << a << ", b = " << b << endl;
    myswap(a, b);
    cout << "a = " << a << ", b = " << b << endl;

    double c = 5, d = 10;
    cout << "c = " << c << ", d = " << d << endl;
    myswap(c, d);
    cout << "c = " << c << ", d = " << d << endl;

    Circle donut(5), pizza(20);
    cout << "donut반지름=" << donut.getRadius()
         << ", pizza반지름=" << pizza.getRadius() << endl;
    myswap(donut, pizza); // T → Circle 로 구체화
    cout << "donut반지름=" << donut.getRadius()
         << ", pizza반지름=" << pizza.getRadius() << endl;
}