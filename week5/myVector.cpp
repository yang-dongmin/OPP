#include <iostream>
using namespace std;

class MyVector {
    // private 안써도 기본으로 들어감
    int* p;
    int size;
public:
    //생성자 중복을 사용하여 기본 100짜리 배열을 만드는 생성자와
    //사용자가 원하는 크기의 배열을 만드는 생성자를 만들어라 (크기는 매개변수로 전달받음)

    // MyVector(){ 
    //     p = new int[100];
    //     size = 100;
    // }

    MyVector(int n = 100){ // 기본값을 줌으로써 매개변수 없는 MyVector는 필요없음(중복 제거 가능)
        p = new int[n];
        size = n;
    }

    ~MyVector() {
        delete[] p;
    }

    int getSize(){
        return size;
    }
};

int main(){
    MyVector vector;
    cout << "vector size : " << vector.getSize() << endl;
    MyVector v(30);
    cout << "v size : " << v.getSize() << endl;
}