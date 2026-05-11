// 선언부

#include <iostream>
using namespace std;

template <class T>
class MyStack {
    int tos;           // top of stack
    T data[100];       // T 타입의 배열 (스택 크기 100)
public:
    MyStack();
    void push(T element);
    T pop();
};

//구현부
template <class T>
MyStack<T>::MyStack() {
    tos = -1;
};

template <class T>
void MyStack<T>::push(T element){
    if(tos == 99){
        cout << "stack full";
        return;
    }
    tos++;
    data[tos] = element;
};


template <class T>
T MyStack<T>::pop(){
    if(tos == -1){
        cout << "stack empty";
        return 0;
    }
    return data[tos--];
};