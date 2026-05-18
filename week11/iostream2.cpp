#include <iostream>
using namespace std;

int main(){
    char str1[80], str2[80];

    // cin.get(str1,80);
    // cout << str1 << endl;

    // cin.ignore(1); // '\n'을 제거 - 안하면 str1에서 \n을 만나면 바로 종료

    // cin.get(str2, 80);
    // cout << str2 << endl;

    cin.getline(str1,80); // getline을 하면 \n을 제거 안해도 됨
    cout << str1 << endl;
    cin.getline(str2,80);
    cout << str2 << endl;
}