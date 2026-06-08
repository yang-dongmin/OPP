#include <iostream>
using namespace std;

// // 방법 1 : 반환값으로 오류 전달
// int divide(int a, int b){
//     if (b == 0) return -1;
//     return a / b;
// }

// 방법 2 : throw로 예외 처리
int divide(int a, int b){
    if (b == 0) throw invalid_argument("0으로 나눌 수 없습니다.");
    return a / b;
}

void process(int value) {
    if (value < 0)
        throw invalid_argument("음수는 허용되지 않습니다.");
    if (value > 100)
        throw out_of_range("100을 초과할 수 없습니다.");
    cout << "처리 완료: " << value << endl;
}

int main(){

    int inputs[] = {50, -1, 200};

    for (int v : inputs)
    {
        try{
            process(v);
        }
        catch (const exception& e){
            // 모든 예외 잡기
            cout << e.what() << endl;
        }
        // catch (const invalid_argument &e)
        // {
        //     cout << "[invalid_argument] " << e.what() << endl;
        // }
        // catch (const out_of_range &e)
        // {
        //     cout << "[out_of_range] " << e.what() << endl;
        // }
    }

    // // int result = divide(10,0);
    // // if(result == -1){
    // //     cout << "오류 발생" << endl;
    // // }
    // try{
    //     // 예외가 일어날 수 있는 코드
    //     cout << divide(10,2) << endl;
    //     cout << divide(10,0) << endl;
    //     cout << "안녕 친구들!" << endl;
    // } catch(const invalid_argument& e){ // 예외 객체의 타입
    //     // 예외 발생 시 처리하는 코드
    //     cout << "예외 발생 : " << e.what() << endl;
    // }
    // cout << "hello" << endl;
}