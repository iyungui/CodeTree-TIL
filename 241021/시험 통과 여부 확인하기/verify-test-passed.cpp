#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    if (n >= 80) {
        cout << "pass";
    } else {
        int score;
        score = 80 - n;
        cout << score << " more score";
    }
    return 0;
}