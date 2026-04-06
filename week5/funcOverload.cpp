#include <iostream>
using namespace std;

// int sum(int a, int b){
//     return a+b;
// } // 주석 제거하면 오류
double sum(double a, double b){
    return a+b;
}
int sum(int a, int b, int c=1){
    return a+b+c;
}
void msg(int id){
    cout << id << endl;
}

void msg(int id, string text = ""){
    cout << id << " : " << text << endl;
}
int main(){

    msg(5,"hi");
    // msg(5); // 얜 안됨 (무슨 함수인지를 컴파일러가 모름(text 기본값이 있기 때문))

    cout << sum(1,2) << endl; // 얘가 애매함
    cout << sum(1.1,2.2) << endl;
    cout << sum(1,2,3) << endl;
    
    return 0;
}