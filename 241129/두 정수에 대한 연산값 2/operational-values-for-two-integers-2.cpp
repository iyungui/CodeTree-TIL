#include <iostream>
using namespace std;

void AddOrMul(int &a, int &b) {
    if(a > b) {
        a *= 2;
        b += 10;
    } else {
        b *= 2;
        a += 10;
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;
    AddOrMul(a, b);
    cout << a << " " << b;
    return 0;
}