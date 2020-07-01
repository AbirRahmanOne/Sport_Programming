#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;

bool visited[ N ];
vector <int> graph[ N ];

void dfs(int current_node) {
    visited[current_node] = true;
    for (auto x: graph[current_node]) {
        if (!visited[x]) dfs(x);
    }
}

int main() {
    int nodes, edges;
    cin >> nodes >> edges;
    for (int i = 1; i <= edges; i++) {
        int from, to;
        cin >> from >> to;
        graph[from].push_back(to);
        graph[to].push_back(from); // if bi-directed graph
    }

    memset(visited, false, sizeof(visited));
    for (int i = 1; i <= nodes; i++) if (!visited[i]) dfs(i);
    return 0;
}
