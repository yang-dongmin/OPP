#include "myStack.h"

int main(){
    MyStack<int> iStack;
    iStack.push(3);
    cout << iStack.pop() << endl;

    MyStack<double> dStack;
    dStack.push(3.14);
    cout << dStack.pop() << endl;
}