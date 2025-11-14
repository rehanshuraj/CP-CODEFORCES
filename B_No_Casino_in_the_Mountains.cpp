#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int hike = 0;
        int i = 0;

        while (i + k <= n) {
            // compute sum of window [i, i+k-1]
            bool allZero = true;
            for (int j = i; j < i + k; j++) {
                if (a[j] != 0) {
                    allZero = false;
                    break;
                }
            }
            if (allZero) {
                hike++;
                i += k+1;  // skip the block
            } else {
                i++;
            }
        }

        cout << hike << "\n";
    }
}
