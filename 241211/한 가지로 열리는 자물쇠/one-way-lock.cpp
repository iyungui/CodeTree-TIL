#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int a, b, c;
    cin >> n;
    cin >> a >> b >> c;
        // i    j    k

    int cnt = n * n * n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            for(int k = 1; k <= n; k++) {
                if(abs(a - i) > 2 && abs(b - j) > 2 && abs(c - k) > 2) {
                    cnt--;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}