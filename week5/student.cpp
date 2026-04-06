#include <iostream>
using namespace std;
class Student
{
private:
    int id;

public:
    Student(int id); // 선언만 하기
    // Student(int id){ // 선언부라서 구현부에 하는게 나음
    //     this -> id = id;
    //     count++;
    // }

    static int count;
    static int getCount();
};
// 구현부
Student::Student(int id) 
{
    this->id = id;
    count++;
}

int Student::count = 0;

int Student::getCount()
{
    return count;
}
int main()
{
    Student s1(101);
    Student s2(102);
    Student s3(103);
    cout << "생성된 학생 객체 수: " << Student::getCount() << endl;
}