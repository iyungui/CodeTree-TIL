#include <iostream>
using namespace std;

// #define MAX_N 100

// int n;
// int arr[MAX_N][MAX_N];
// int dx[4] = {0, 1, 0, -1};
// int dy[4] = {1, 0, -1, 0};
// int curr_dir = 2;

// bool InRange(int x, int y) {
//     return x >= 0 && x < n && y >= 0 && y < n;
// }

// int main() {
//     cin >> n;
//     int x = n - 1, y = n - 1;   // current position

//     arr[x][y] = n * n;

//     int nx, ny;
//     for(int i = n * n - 1; i >= 1; i--) {
//         nx = x + dx[curr_dir];
//         ny = y + dy[curr_dir];

//         if(!InRange(nx,ny) || arr[nx][ny] != 0)
//             curr_dir = (curr_dir + 1) % 4;
        
//         x += dx[curr_dir];
//         y += dy[curr_dir];

//         arr[x][y] = i;
//     }

    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j < n; j++)
    //         cout << arr[i][j] << " ";
    //     cout << endl;
    // }
    // return 0;
// }


// 해설 코드

#define MAX_N 100

int n;

int arr[MAX_N][MAX_N];
int dx[4] = {0, -1, 0, 1};
int dy[4] = {1, 0, -1, 0};
int curr_dir = 0;

// 이동할 횟수
int move_num = 1;

bool InRange(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < n;
}

int main() {
    cin >> n;

    int x = n / 2, y = n / 2;   // current position
    
    int cnt = 1;

    int nx, ny;
    while(InRange(x, y)) {
        // move_num 만큼 이동
        for(int i = 0; i < move_num; i++) {
            arr[x][y] = cnt++;

            x += dx[curr_dir];
            y += dy[curr_dir];

            if(!InRange(x, y)) break;
        }

        curr_dir = (curr_dir + 1) % 4;

        if(curr_dir == 0 || curr_dir == 2) move_num++;
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
    return 0;
}