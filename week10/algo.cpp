#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v = {6,3,4,2,1};
    vector<int>::iterator it;
    for(it=v.begin(); it!=v.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    sort(v.begin(), v.begin()+3);

    for(it=v.begin(); it!=v.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    
}