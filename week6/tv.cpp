#include <iostream>
using namespace std;

class TV {
    int channel, volume, size;
    bool on;
public:
    TV(int ch, int vol, bool on, int s) : size(s), channel(ch), volume(vol), on(on) {
        cout << "TV : " << ch << endl;
    }
    void setVolume(int vol) { volume = vol; }
    int getSize(){return size;}
};

class WideTV : public TV {
    int width;
public:
    WideTV(int width) : TV(100, 10, true, width) {
        cout << "WideTV : " << width << endl;
        this -> width = width;
     }  // TV(45, 20, true) 전달
};

class SmartTV : public WideTV {
    string url;
public:
    // 선언 : 호출
    SmartTV(string url, int width) : WideTV(width) {
        cout << "SmartTV : " << url << endl;
        this -> url = url;
    }
};

int main(){
    SmartTV("www.youtube.com", 1920);
}