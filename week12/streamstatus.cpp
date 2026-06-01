#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
    ofstream fout("test.txt");
    fout << "hello\n" << "42\n" << "world\n";
    fout.close();

    ifstream fin("test.txt");
    string s;
    int n;

    fin >> s;           // "hello" 읽기 성공
    cout << "good: " << fin.good() << "\n";  // 1

    fin >> n;           // "42" 읽기 성공
    cout << "good: " << fin.good() << "\n";  // 1

    fin >> n;           // "world" 읽기 실패 (정수 변환 불가)
    cout << "fail: " << fin.fail() << "\n";  // 1

    fin.clear();        // 오류 비트 해제
    fin.ignore(1000, '\n');   // 잘못된 라인 건너뜀

    // 이후 정상 동작 가능
    getline(fin, s);    // 다음 라인 읽기 시도
    cout << "eof: " << fin.eof() << "\n";   // 1 (파일 끝)
    fin.close();
}