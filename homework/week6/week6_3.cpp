// 2023564058 양동민
#include <iostream>
using namespace std;

class Printer {
public:
    void print() { cout << "인쇄 중..." << endl; }
};

class Scanner {
public:
    void scan() { cout << "스캔 중..." << endl; }
};

// virtual : 중복 상속으로 인한 모호성을 근본적으로 제거
class MultiFunctional : virtual public Printer, virtual public Scanner { // 다중 상속
public:
    void copy() {
        // TODO: scan() 다음 print() 호출
        scan();
        print();
    }
};

int main() {
    MultiFunctional mfp;
    mfp.copy();
    // 출력:
    // 스캔 중...
    // 인쇄 중...
}