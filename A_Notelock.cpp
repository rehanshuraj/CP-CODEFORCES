#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int ans = 0;
        int last = -1000000000;  // sufficiently small value

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                if (i - last >= k) {
                    ans++;      // must protect this '1'
                }
                last = i;       // this '1' blocks future deletions
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
