#include <iostream>
using namespace std;

class Matrix2x2 {
    double a[2][2];
public:
    Matrix2x2(){
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2; j++){
                a[i][j] = 0;
            }
        }
    };                           // 단위 행렬로 초기화
    Matrix2x2& set(int r, int c, double v){
        a[r][c] = v;
        return *this;
    }; // (r,c) 위치에 v 설정 후 this& 반환
    Matrix2x2& scale(double factor){
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2; j++){
                a[i][j] *= factor;
            }
        }
        return *this;
    };        // 모든 원소에 factor 곱한 후 this& 반환
    void print(){
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2; j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    };
};

// 사용 예
int main(){
Matrix2x2 m;
m.set(0,0,1).set(0,1,2).set(1,0,3).set(1,1,4).scale(2).print();
}
// 출력:
// 2 4
// 6 8
