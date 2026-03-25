#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    double score;
public:
    Student* setName(string name){ // return type = Student* (현재 객체의 주소 반환)
        this -> name = name;
        return this; // 자기 자신의 주소 반환
    }
    Student*  setAge(int age){
        this -> age = age;
        return this; // 자기 자신의 주소 반환
    }
    Student*  setScore(double score){
        this -> score = score;
        return this; // 자기 자신의 주소 반환
    }
    void print(){ // 출력
        cout << "이름 : " << name << ", 나이 : " << age << ", 성적 : " << score << endl;
    }
};

int main() {
    // 정적 객체 체이닝
    Student s;
    s.setName("Kim")->setAge(20)->setScore(95.5); // this(객체 주소)를 반환하여 함수 체이닝 수행
    s.print();

    // 동적 객체 체이닝
    Student *ps = new Student;
    ps->setName("Lee")->setAge(22)->setScore(88.0);
    ps->print();
    delete ps; // 메모리 해제

    return 0;
}