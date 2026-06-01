#include <iostream>
#include <fstream>
using namespace std;

int main(){
    // 1. 스트림 생성 + 파일 열기
    ofstream fout("hello.txt");

    char name[20]; // 이름
    int sid;       // 학번
    char dept[30]; // 학과

    cout << "이름 >> ";  cin >> name;
    cout << "학번 >> ";  cin >> sid;
    cout << "학과 >> ";  cin >> dept;

    // 2. 파일 잘 열렸는지 검사
    if(!fout){
        cout << "파일을 열 수 없습니다." << endl;
        return 1;
    }

    // 3. 파일에 쓰기
    fout << name << endl;   // "kitae\n"
    fout << sid  << endl;   // "20131111\n"  ← 정수가 문자열로 변환
    fout << dept << endl;   // "computer\n"
    
    // 4. 파일 닫기
    fout.close();
    cout << "저장 완료" << endl;
}