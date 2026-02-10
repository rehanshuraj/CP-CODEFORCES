#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T;
    cin >> T;
    while (T--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<char> expert(k + 1, 0);
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            expert[x] = 1;
        }
        vector<ll> score1(k + 1, 0);
        unordered_map<ll, int> pair_cnt;
        ll base = 0;
        
        for (int i = 0; i < m; ++i) {
            int a, b;
            cin >> a >> b;
            if (a == b) {
                if (expert[a]) base++;
                else score1[a]++;
            } else {
                bool ea = expert[a], eb = expert[b];
                if (ea && eb) base++;
                else if (ea && !eb) score1[b]++;
                else if (!ea && eb) score1[a]++;
                else {
                    int x = min(a, b), y = max(a, b);
                    ll key = (ll)x * (k + 1) + y;
                    pair_cnt[key]++;
                }
            }
        }
        
        vector<int> non_expert;
        for (int i = 1; i <= k; ++i)
            if (!expert[i])
                non_expert.push_back(i);
        
        int sz = non_expert.size();
        ll max_one = 0, best_two = 0;
        if (sz >= 1) {
            ll max1 = 0, max2 = 0;
            for (int x : non_expert) {
                if (score1[x] > max1) {
                    max2 = max1;
                    max1 = score1[x];
                } else if (score1[x] > max2) {
                    max2 = score1[x];
                }
            }
            max_one = max1;
            if (sz >= 2) best_two = max1 + max2;
        }
        
        for (auto &entry : pair_cnt) {
            ll key = entry.first;
            int cnt = entry.second;
            int x = key / (k + 1), y = key % (k + 1);
            ll cand = score1[x] + score1[y] + cnt;
            if (cand > best_two) best_two = cand;
        }
        
        ll extra = 0;
        if (sz >= 1) extra = max(extra, max_one);
        if (sz >= 2) extra = max(extra, best_two);
        cout << base + extra << "\n";
    }
    
    return 0;
}