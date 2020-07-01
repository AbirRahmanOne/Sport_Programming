#include <bits/stdc++.h>
using namespace std;

const int N = 505;

int row, col;
bool visited[ N ][ N ];

const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, 1, -1};

bool inside_grid(int nx, int ny) {
    return nx >= 1 && ny >= 1 && nx <= row && ny <= col;
}

void dfs(int x, int y) {
    visited[x][y] = true;
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i], ny = y + dy[i];
        if (!inside_grid(nx, ny)) continue;
        if (!visited[nx][ny]) dfs(nx, ny);
    }
}

int main() {
    cin >> row >> col;
    memset(visited, false, sizeof(visited));
    dfs(1, 1);
    return 0;
}
