#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<ll> b(n + 1), c(n + 1);
    for (int i = 0; i <= n; i++) cin >> b[i];
    for (int i = 0; i <= n; i++) cin >> c[i];

    ll total_slashes = 0;
    ll need = c[n]; 

    for (int i = n; i >= 1; i--) {
        ll shortfall = need - b[i];
        if (shortfall > 0) {
            ll s = (shortfall + 1) / 2; 
            total_slashes += s;
            need = c[i - 1] + s;      
        } else {
            need = c[i - 1];
        }
    }
    if (need > b[0]) {
        cout << -1 << '\n';
    } else {
        cout << total_slashes << '\n';
    }

    return 0;
}