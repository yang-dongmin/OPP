#include <iostream>
using namespace std;

int main(){
    int ch;
    while((ch = cin.get()) != EOF){
        cout.put(ch);
        if(ch == '\n'){
            break;
        }
    }
    char ch1;
    while (true)
    {
        cin.get(ch1);
        if (cin.eof())
            break;
        cout.put(ch1);
        if (ch == '\n')
            break;
    }
}
