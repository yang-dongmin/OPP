#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, sub;
    int len, plus;
    int start = 0, sum = 0;


    cout << "덧셈식 입력 : ";
    getline(cin, str); // 공백 포함 저장
    len = str.length();

    while(true){
        plus = str.find('+', start); // + 찾기
        if (plus == -1) // + 없을 때
        {
            if (start < len) // 마지막 + 방지
            {
                sub = str.substr(start, plus - start); // 마지막 숫자 저장
                sum += stoi(sub); // 정수 변환 후 덧셈
                cout << sub << endl;
            }
            cout << "숫자들의 합은 " << sum << endl;
            break;
        }
        else{ // + 일 때
            sub = str.substr(start, plus - start); // 각 숫자들 저장
            sum += stoi(sub); // 정수 변환 후 덧셈
            cout << sub << endl;
        }
        start = plus + 1; // + 다음 인덱스
    }


    return 0;
}