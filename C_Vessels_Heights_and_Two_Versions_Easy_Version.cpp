#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; ++i) cin >> h[i];

    for (int x = 0; x < n; ++x) {
        vector<int> R(n, 0);
        int cmax = 0;
        for (int k = 1; k < n; ++k) {
            int p = (x + k - 1) % n;
            cmax = max(cmax, h[p]);
            R[(x + k) % n] = cmax;
        }

        vector<int> L(n, 0);
        int cmaxl = 0;
        for (int k = 1; k < n; ++k) {
            int p = (x - k + n) % n;
            cmaxl = max(cmaxl, h[p]);
            L[(x - k + n) % n] = cmaxl;
        }

        long long ans = 0;
        for (int i = 0; i < n; ++i) {
            if (i != x) ans += min(R[i], L[i]);
        }
        cout << ans << (x == n - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}