#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; ++i)cin >> b[i];
    
    sort(b.rbegin(), b.rend());
    
    bool f = true;
    for (int i = 2; i < n; ++i) {
        if (b[i] != b[i - 2] % b[i - 1]) {
            f = false;
            break;
        }
    }
    
    if (f) cout << b[0] << " " << b[1] << "\n";
    else cout << "-1\n";
    
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