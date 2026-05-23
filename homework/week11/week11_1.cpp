// 2023564058 양동민
#include <iostream>
using namespace std;

class Temperature{
    double c;
public:
    Temperature() : c(0) {} // 기본 생성자

    // private 멤버 c에 접근하기 위해 friend 선언
    friend istream &operator>>(istream &ins, Temperature &t); 
    friend ostream &operator<<(ostream &stream, const Temperature &t);

    // 사용자 정의 조작자(스트림 반환)
    ostream& celsius(ostream& outs) {return outs << "섭씨 : " << c << 'C' << endl;} // 섭씨 출력
    ostream& fahrenheit(ostream& outs) {return outs << "화씨 : " << c * 9/5 + 32 << 'F' << endl;} // 화씨 출력 
};
istream &operator>>(istream &ins, Temperature &t){
    double value; // 숫자와 문자 구분
    char unit;
    cout << "온도 입력 : ";
    ins >> value >> unit; 
    if (unit == 'C' || unit == 'c') // 섭씨면 바로 멤버에 저장
    {
        t.c = value;
    }
    else if (unit == 'F'|| unit == 'f') // 화씨면 섭씨로 변환 후 멤버에 저장
    {
        t.c = (value - 32) * 5/9;
    }
    return ins;
}
ostream &operator<<(ostream &stream, const Temperature &t){ // << 연산은 t를 변환하지 않으므로 const로 선언
    stream << t.c << "C (" << t.c * 9/5 + 32 << "F)" << endl;
    return stream;
}
int main(){
    Temperature temp;
    cin >> temp;
    cout << temp;
    temp.celsius(cout);
    temp.fahrenheit(cout);

    return 0;
}