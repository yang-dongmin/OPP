#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    ifstream fin("data.txt"); // "42\nHelloWorld\n"

    int n;
    fin >> n; // 42만 읽기, \n은 버퍼에 남음

    cout << n;

    string line; // 버퍼에 남은 \n을 읽음
    // getline(fin,line);

    fin.ignore(); // 버퍼에 남은 \n 한글자 버리기
    getline(fin, line);

    cout << line << endl;
}