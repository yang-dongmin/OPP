// p++로 배열을 순회하고 메모리를 해제하기 위해서는 초기 주소를 기억하고 그 주소를 해제해야한다.

#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle() { radius = 1; }
    void setRadius(int r) { radius = r; }
    int getRadius() { return radius; }
    double getArea() { return 3.14 * radius * radius; }
};

int main() {
    int n,r; // 원의 개수, 반지름

    cout << "원의 개수 : ";
    cin >> n;

    Circle *circleArray = new Circle[n]; // n개의 Circle 객체 생성(처음 주소)
    Circle *p = circleArray; // circleArray 배열 순회용 포인터

    int cnt = 0; // 조건 참의 원 개수 저장

    for(int i = 0; i < n; i++){
        cout << "원" << i+1 << "의 반지름 : ";
        cin >> r;
        p->setRadius(r); // 입력받은 반지름으로 변경

        p++; // 배열순회
    }

    // 결과 출력
    cout << endl;
    cout << "[면적 100~500 필터 결과]" << endl;

    p = circleArray; // 포인터 재사용을 위해 처음 주소로 이동
    double pi;
    for(int j = 0; j < n; j++){
        pi = p->getArea();
        if(pi >= 100 && pi <= 500){ // 면적 필터링
            cout << "원" << j+1 << ": 반지름=" << p->getRadius() << ", 면적=" << pi << endl;
            cnt += 1; // 만족 시 cnt + 1
        }
        p++; // 배열 순회
    }
    cout << "조건을 만족하는 원 : " << cnt << "개" << endl;

    delete [] circleArray; // 배열 메모리 해제
    return 0;
}