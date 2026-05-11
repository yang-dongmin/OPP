#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    
    // iterator를 사용한 순회
    // vector<int>::iterator it;
    // for (it = v.begin(); it != v.end(); it++)
    // {
        //     cout << *it << '\t';
        // }

    for(auto it = v.begin(); it!=v.end();it++){
        cout << *it << " ";
    }
    cout << endl;

    v[0] = 100;
    int n = v[2];
    v.at(2) = 5;

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << '\t';
    // }
    
    // 범위 기반 for문 사용 가능
    for(auto n : v){
        cout << n << " ";
    }
    cout << endl;
}