#include <iostream>
using namespace std;

int main(){
    cout<<"정사각형 넓이 구하기"<<endl;

    int width, height, area;

    cout << "가로 길이 입력 : ";
    cin >> width;

    cout << "세로 길이 입력 : ";
    cin >> height;

    area = width * height;

    cout<<"넓이 : " << area << endl;
    return 0;
}