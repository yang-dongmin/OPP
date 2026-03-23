#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, con;
    cout << "문자열 입력(한글안됨)";
    getline(cin, str);
    cout << "길이 : " << str.length() << endl;
    cout << "첫 번째 문자 : " << str[0] << endl;
    cout << "마지막 문자 : " << str[str.length()-1] << endl;
    for(int i = 0; i<=str.length(); i++){
        con += str[str.length()-(i)];
    }
    cout << "뒤집은 문자열" << con << endl;
    return 0;
}