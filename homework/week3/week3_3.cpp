#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, sub;
    int len, count, startIndex = 0;

    cout << "덧셈식 입력 : ";
    getline(cin, s);
    len = s.length();

    startIndex = s.find('+'); //1+22+3

    for(int i = 0; i < len; i++){
        startIndex = s.find('+', i);
        if (startIndex == -1) // + 아닐 때
        {
            count++;
        }
        else{ // + 일 때
            sub = s.substr(startIndex,count);
            cout << sub << endl;
        }
        
    }


    return 0;
}