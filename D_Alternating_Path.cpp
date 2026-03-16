#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int totalbeautiful = 0;
    vector<int> c(n + 1, -1);
    
    for (int i = 1; i <= n; ++i) {
        if (c[i] == -1) {
            queue<int> que;
            que.push(i);
            c[i] = 0; 
            
            int count[2] = {0, 0};
            count[0]++;
            bool is_bipartite = true;
            
            while (!que.empty()) {
                int u = que.front();
                que.pop();
                
                for (int v : adj[u]) {
                    if (c[v] == -1) {
                        c[v] = 1 - c[u];
                        count[c[v]]++;
                        que.push(v);
                    } else if (c[v] == c[u]) {
                      is_bipartite = false;
                    }
                }
            }
            
            if (is_bipartite) {
                totalbeautiful += max(count[0], count[1]);
            }
        }
    }

    cout << totalbeautiful << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}