#include <iostream>
using namespace std;

int F(int n) {
    if(n == 1) return 0;
    else if(n % 2 == 0) return F(n / 2) + 1;
    else if(n % 2 == 1) return F(n * 3 + 1) + 1;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    cout << F(n);
    return 0;
}