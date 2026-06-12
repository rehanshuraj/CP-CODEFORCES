#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            int n, k;
            cin >> n >> k;
            vector<int> a(n);
            for (int i = 0; i < n; i++) cin >> a[i];
            
            sort(a.begin(), a.end());
            
            vector<pair<int, int>> freqs;
            for (int i = 0; i < n; i++) {
                if (freqs.empty() || freqs.back().first != a[i]) freqs.push_back({a[i], 1});
                else freqs.back().second++;
                
            }
            bool win = false;
            int start = 0;  
            for (int i = 0; i < freqs.size(); i++) {
                if (i == (int)freqs.size() - 1 || freqs[i+1].first - freqs[i].first > k) {
                    int si = i - start + 1;                
                    if (si > 1 || freqs[start].second % 2 == 0) {
                        win = true;
                        break;
                    }        
                    start = i + 1;
                }
            }
            
            if (win) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    
    return 0;
}