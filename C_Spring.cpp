#include <bits/stdc++.h>
using namespace std;

long long safe_lcm(long long x, long long y, long long m) {
    if (x == 0 || y == 0) return 0;
    long long g = gcd(x, y);
    long long xdivg = x / g;
    if (m / xdivg < y) {
        return m + 1; 
    }
    return xdivg * y;
}

void solve() {
    long long a, b, c, m;
    cin >> a >> b >> c >> m;
    
    long long n_a = m / a;
    long long n_b = m / b;
    long long n_c = m / c;

    long long lcmab = safe_lcm(a, b, m);
    long long lcmac = safe_lcm(a, c, m);
    long long lcmbc = safe_lcm(b, c, m);
    long long lcmabc = safe_lcm(lcmab, c, m);
    long long nab = (lcmab > m) ? 0 : m / lcmab;
    long long nac = (lcmac > m) ? 0 : m / lcmac;
    long long nbc = (lcmbc > m) ? 0 : m / lcmbc;
    long long nabc = (lcmabc > m) ? 0 : m / lcmabc;
    long long water_a = 6 * n_a - 3 * nab - 3 * nac + 2 * nabc;
    long long water_b = 6 * n_b - 3 * nab - 3 * nbc + 2 * nabc;
    long long water_c = 6 * n_c - 3 * nac - 3 * nbc + 2 * nabc;
    
    cout << water_a << " " << water_b << " " << water_c << "\n";
}

int main() {
    // Fast I/O to shave off extra milliseconds
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}