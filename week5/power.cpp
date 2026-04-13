#include <iostream>
using namespace std;

class Power{
    int kick;
    int punch;
public:
    Power(int k=0, int p=0):kick(k),punch(p){};
    void show();
    Power operator+(Power op2);
    bool operator==(Power op2);
    Power& operator+=(Power op2);
    Power& operator++(); // 전위 ++
    Power& operator++(int x); // 후위 ++ : x는 사용하지 않는 변수(넣어서 오류 없앰)
    Power operator+(int op2);

    friend Power operator+(int n, Power p); // 친구 선언
};
void Power::show(){
    cout << "kick : " << kick << ", punch : " << punch << endl;
}
bool Power::operator==(Power op2){
    if(this->kick == op2.kick && this->punch == op2.punch)
        return true;
    else
        return false;
}
Power& Power::operator+=(Power op2){
    this -> kick += op2.kick;
    this -> punch += op2.punch;
    return *this;
}
Power& Power::operator++(){
    this -> kick++;
    this -> punch++;
    return *this;
}
// Power& Power::operator++(int x){
//     static Power tmp = *this;
//     this -> kick++;
//     this -> punch++;
//     return tmp;
// }
Power Power::operator+(Power op2){
    Power tmp; // 반환할 Power 생성자
    tmp.kick = this -> kick + op2.kick; // a.kick + b.kick
    tmp.punch = this -> punch + op2.punch; // a.punch + b.punch
    return tmp;
}
Power Power::operator+(int n){
    
}

Power operator+(int n, Power p){
    Power tmp;
    tmp.kick = n + p.kick;
    tmp.punch = n + p.punch;
    return tmp;
}


int main(){
    Power a(3,5), b;
    cout << "계산 전" << endl;
    a.show();
    b.show();
    b = a + 2;
    cout << "계산 후" << endl;
    b.show();
}