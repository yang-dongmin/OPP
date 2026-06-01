#include <iostream>
#include <fstream>
using namespace std;

int main(){

    char name[20]; // 이름
    int sid;       // 학번
    char dept[30]; // 학과

    // 1. 스트림 생성 + 파일 열기
    ifstream fin("hello.txt");

    // 2. 파일 열림 확인
    if(!fin){
        cout << "파일 열기 실패" << endl;
        return 1;
    }

    // 3. 파일 내용 읽기
    // (1) 공백으로 구분해서 읽기
    // fin >> name >> sid >> dept;

    // (2) get()으로 파일 전체 읽기
    // char ch;

    // while(fin.get(ch)){
    //     cout << ch;
    // }

    // (3) getline()으로 한 줄씩 읽기
    string str;
    while(getline(fin, str)){
        cout << str << endl; // \n은 버리기 때문에 endl 필수
    }

    // 화면 출력
    // cout << name << endl;   // "kitae\n"
    // cout << sid  << endl;   // "20131111\n"  ← 정수가 문자열로 변환
    // cout << dept << endl;   // "computer\n"

    fin.close();
}