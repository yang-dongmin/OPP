#include <iostream>
#include "test.h"
using namespace std;

int main() {
    Employee e("김철수", 3000000);
    e.raise(200000);
    e.print();
}