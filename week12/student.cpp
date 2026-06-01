#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student{
    char name[20];
    int id;
    double score;
};

const string DB_FILE = "student.bin";

void addStudent(const Student &s){
    ofstream fout(DB_FILE, ios::binary | ios::app);
    if(!fout){
        cerr << "파일 오류" << endl;
        return;
    }
    fout.write((const char*)(&s), sizeof(Student));
    fout.close();
    cout << "저장 완료" << endl;
}
// 총 학생 수 반환
int countStudents(){
    ifstream fin(DB_FILE, ios::binary);
    if(!fin){
        cerr << "파일 오류";
        return 1;
    }
    fin.seekg(0, ios::end);
    return (int)fin.tellg() / sizeof(Student); // 가장 마지막 위치 / 구조체의 크기
}

// n번째 레코드 직접 접근 (임의 접근)
bool readRecord(int n){
    ifstream fin(DB_FILE, ios::binary);
    if(!fin){
        cerr << "파일 오류";
        return 1;
    }
    int total = countStudents();
    if(n<0 || total <= n){
        cout << "인덱스 범위 초과" << endl;
        return false;
    }
    fin.seekg((streampos)n*sizeof(Student), ios::beg);
    Student s;
    fin.read((char*)&s, sizeof(Student));
    cout << "[" << n << "] " << s.name << " " << s.id << " " << s.score << endl;
    fin.close();
    return true;
}

int main(){
    // 데이터 추가
    addStudent({"김민준", 20231001, 95.5});
    addStudent({"이서연", 20231002, 88.0});
    addStudent({"박지우", 20231003, 72.3});
    addStudent({"최유진", 20231004, 91.0});

    cout << "\n총 학생 수: " << countStudents() << "\n\n";

     readRecord(2);
    
}