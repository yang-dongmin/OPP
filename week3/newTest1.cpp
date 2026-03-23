#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, sum;
    double arg;
    cout << "정수의 개수 : ";
    cin >> n;

    // 동적 메모리 할당
    int *arr = new int[n];

    // 오류처리
    if (!arr)
    {
        cout << "메모리 할당 불가" << endl;
        return 0;
    }
    

    for(int i = 0; i < n; i++){
        cout << i+1 << "번째 정수 : ";
        cin >> arr[i];
        sum += arr[i];
    }

    // 합계 출력
    cout << "합계 : " << sum << endl;

    arg = sum / n;

    // 평균 출력
    cout << fixed << setprecision(2); // 소수점 2번째 자리까지만 출력
    cout << "평균 : " << arg << endl;

    // 메모리 반환
    delete [] arr;
    return 0;
}