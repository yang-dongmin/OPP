#include <iostream>
using namespace std;

int main() {
    int x = 5;
    // TODO: x에 대한 참조 변수 rx를 선언하세요
    int &rx = x;

    // TODO: rx를 통해 x의 값을 10으로 변경하세요
    rx = 10;

    // TODO: x, rx 값과 &x, &rx 주소를 각각 출력하세요
    cout << "x = " << x << endl;
    cout << "rx = " << rx << endl;
    cout << "&x = " << &x << endl;
    cout << "&rx = " << &rx << endl;

    return 0;
}