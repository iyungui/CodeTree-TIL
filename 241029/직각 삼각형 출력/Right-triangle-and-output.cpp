#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= i ; j++) {
    //         cout << '*';
    //     }
    //     for (int k = 1; k < i; k++) {
    //         cout << '*';
    //     }
    //     cout << endl;
    // }
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= 2 * i + 1; j++) {
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}