#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


long long floordiv2(long long x) {
    return x >= 0 ? x / 2 : (x - 1) / 2;
}


long long ceildiv2(long long x) {
    return x >= 0 ? (x + 1) / 2 : x / 2;
}

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vector<pair<long long, int>> events;
    events.reserve(n);
    
    for (int i = 0; i < n; ++i) {
        int initial_score = 0;
        events.clear();
        
        for (int j = i + 1; j < n; ++j) {
            if (a[j] > a[i]) {
                long long L = floordiv2(a[i] + a[j]) + 1;
                events.push_back({L, 1});
            } else if (a[j] < a[i]) {
                long long R = ceildiv2(a[i] + a[j]) - 1;
                events.push_back({R + 1, -1});
                initial_score++;
            }
        }
        sort(events.begin(), events.end());
        
        int maxscore = initial_score;
        int currentscore = initial_score;
        int m = events.size();
        for (int k = 0; k < m; ) {
            long long x = events[k].first;
    
            while (k < m && events[k].first == x) {
                currentscore += events[k].second;
                k++;
            }
            if (currentscore > maxscore) {
                maxscore = currentscore;
            }
        }
        
        cout << maxscore << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
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