#include <iostream>
#include<iomanip>
using namespace std;
int main(){
    // 조작자
    cout << showbase;
    for (int i = 0; i < 50; i+=5){
        cout << setw(8) << setfill('.') << dec << i;
        cout << setw(10) << setfill(' ') << oct << i;
        cout << setw(10) << setfill(' ') << hex << i << endl;
    }
    // 포맷 함수
    cout.width(10); // 빈칸 10개
    cout.fill('*'); // 빈칸 채우기
    cout << 30 << endl; // 10진수 출력
    cout.width(10);
    cout.unsetf(ios::dec); // 10진수 출력 해제
    cout.setf(ios::hex | ios::showbase); // 16진수 출력 세팅
    cout << 30 << endl;
    // cout.setf(ios::showbase); // 진수 접두어 표시
    // cout << 30 << endl;
    cout.precision(5); // 소수점 5자리까지
    cout << 11.0/3.0 << endl;
}