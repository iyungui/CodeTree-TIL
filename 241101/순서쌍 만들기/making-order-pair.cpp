#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    for (int i = n; i > 0; i--) {
        for (int j = n; j > 0; j--) {
            cout << "(" << i << ',' << j << ") ";
        }
        cout << endl;
    }
    return 0;
}