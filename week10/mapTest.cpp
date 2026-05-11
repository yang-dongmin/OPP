#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    map<string, string> dic; // key : eng, value : kor
    
    dic.insert(make_pair("love","사랑"));
    dic.insert(make_pair("apple","사과"));
    dic.insert(make_pair("cherry","체리"));
    dic["book"] = "책";

    cout << "저장된 단어 개수 : " << dic.size() << endl;

    cout << "apple : " << dic.at("apple") << endl;
    cout << "love : " << dic["love"] << endl;
}