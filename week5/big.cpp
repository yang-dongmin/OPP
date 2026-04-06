#include <iostream>
using namespace std;

int big(int a, int b){
    return a > b ? a : b;
}

int big(int arr[], int size){
    int r = arr[0];
    for(int i = 1; i<size; i++){
        if(arr[i]>r) r = arr[i];
    }
    return r;
}

int main(){
    int data[5] = {1,9,-2,8,6};
    cout << big(2,3) << endl;
    cout << big(data,5) << endl;
}