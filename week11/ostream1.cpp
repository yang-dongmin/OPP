#include <iostream>
using namespace std;

void printBinary(int n){
    for (int i = 7; i >= 0; i--) {
        // 비트 연산으로 각 비트 추출 후 put()으로 출력
        cout.put(((n >> i) & 1) ? '1' : '0');
    }
    cout.put('\n');
}

int main(){

    printBinary(65);   // 'A'의 ASCII = 65 → 01000001
    printBinary(255);  // → 11111111
    printBinary(0);    // → 00000000

    // put() : 문자 하나씩 출력
    cout.put('H');
    cout.put('i');
    cout.put(33); // ASCII코드 33 : !
    cout.put(65); // ASCII코드 65 : A
    cout.put(97); // ASCII코드 97 : a
    cout.put(48); // ASCII코드 48 : 0
    cout.put('\n');

    // put(), write()는 체이닝 가능 : otream&를 반환하기 때문
    cout.put('C').put('+').put('+').put('\n');

    // write()로 배열의 첫 6개 문자 출력
    char str[] = "I love programming.";
    cout.write(str, 6).write(str + 6 , strlen(str)-1);
    cout << endl;

    for(int i = 0; i <10; i++){
        cout.put('*');
    }
    cout.put('\n');
}