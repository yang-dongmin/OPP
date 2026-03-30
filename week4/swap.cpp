#include <iostream>

void swap(int a, int b){ // 이건 그냥 함수 실행 당시에만 바뀐것처럼 보이고 실제로는 값이 바뀌지 않음(값 전달)
    int temp = a;
    a = b;
    b = temp;
}

void swap_addr(int *a, int *b){ // 포인터 변수가 매개변수이기 때문에 주소를 매개변수로 줘야함 & (주소 전달)
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap_ref(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

int main(){
    int m =2, n=3;
    std::cout << "바꾸기 전 : m = " << m << ", n = " << n << std::endl;
    //swap_addr(&m,&n); // 주소 전달 &
    swap_ref(m,n);
    std::cout << "바꾼 후 : m = " << m << ", n = " << n << std::endl;
}