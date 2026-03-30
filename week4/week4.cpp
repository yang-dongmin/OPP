#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Book {
    char* title;
    char* author;
    double price;
public:
    Book(double pr, const char* t, const char* a);
    Book(const Book& b);   // TODO: 깊은 복사 생성자 작성
    ~Book();
    void changeTitle(const char* t) {
        if(strlen(t) > strlen(title)) return;
        strcpy(title, t);
    }
    void show() {
        cout << title << " / " << author << " / " << price << endl;
    }
};

Book::Book(double pr, const char* t, const char* a) {
    price = pr;
    title  = new char[strlen(t) + 1]; strcpy(title,  t);
    author = new char[strlen(a) + 1]; strcpy(author, a);
}

// TODO: 깊은 복사 생성자를 구현하세요
// 힌트: new로 메모리 할당 후 strcpy로 내용 복사
Book::Book(const Book& b){
    this -> price = b.price;
    this -> title = new char[strlen(b.title)+1];
    this -> author = new char[strlen(b.author)+1];
    strcpy(this->title, b.title);
    strcpy(this->author, b.author);
}



Book::~Book() {
    delete[] title;
    delete[] author;
}

int main() {
    Book b1(30000, "C++ Programming", "Hong");
    Book b2(b1);              // 복사 생성자 호출

    b1.changeTitle("Py");     // b1 제목 변경

    cout << "b1: "; b1.show();   // 예상: Py / Hong / 30000
    cout << "b2: "; b2.show();   // 예상: C++ Programming / Hong / 30000
    return 0;
}