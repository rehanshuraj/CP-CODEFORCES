#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n+1);
    vector<int> b(n+1);
    vector<vector<pair<int,int>>> adj(n+1);
    vector<int> freq(n+1,0);
    vector<int> ans;
    vector<bool> used(n + 1, false);
    vector<int> ptr(n + 1, 0);

    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=1; i<=n; i++) cin>>b[i];
    for(int i=1; i<=n; i++){
        freq[a[i]]++;
        freq[b[i]]++;
    }

    for(int x: freq){
        if(x%2!=0){
            cout<<-1<<endl;
            return;
        }
    }
    for(int i=1; i<=n; i++){
        adj[a[i]].push_back({b[i], i});
        adj[b[i]].push_back({a[i], i});
    }
    
    for (int i = 1; i <= n; i++) {
        if (ptr[i] == adj[i].size()) continue;
        
        vector<int> st;
        st.push_back(i);
        
        while (!st.empty()) {
            int u = st.back();
            bool found = false;
            
            while (ptr[u] < adj[u].size()) {
                int v = adj[u][ptr[u]].first;
                int id = adj[u][ptr[u]].second;
                ptr[u]++;
                if (used[id]) continue;
                
                used[id] = true;
                if (a[id] != u) ans.push_back(id);        
                st.push_back(v);
                found = true;
                break;
            }
            
            if (!found) st.pop_back();
        }
    }  
    sort(ans.begin(), ans.end());
    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << (i + 1 == ans.size() ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) solve();
}