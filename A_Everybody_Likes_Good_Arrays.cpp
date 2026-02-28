#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MOD = 1e9 + 7;
const int N = 1e6;

ll fact[N + 1], inv_fact[N + 1], pow2[N + 1], inv_pow2[N + 1];

ll pow_mod(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b & 1) res = res * a % MOD;
        a = a * a % MOD;
        b >>= 1;
    }
    return res;
}

void precompute() {
    fact[0] = 1;
    for (int i = 1; i <= N; i++) fact[i] = fact[i - 1] * i % MOD;
    inv_fact[N] = pow_mod(fact[N], MOD - 2);
    for (int i = N - 1; i >= 0; i--) inv_fact[i] = inv_fact[i + 1] * (i + 1) % MOD;
    pow2[0] = 1;
    for (int i = 1; i <= N; i++) pow2[i] = pow2[i - 1] * 2 % MOD;
    inv_pow2[N] = pow_mod(pow2[N], MOD - 2);
    for (int i = N - 1; i >= 0; i--) inv_pow2[i] = inv_pow2[i + 1] * 2 % MOD;
}

ll C(int n, int k) {
    if (k < 0 || k > n) return 0;
    return fact[n] * inv_fact[k] % MOD * inv_fact[n - k] % MOD;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    precompute();
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        if (m == 0) {
            cout << "0\n";
            continue;
        }
        ll A;
        if (m == n) {
            A = (ll)n * pow2[n - 1] % MOD;
        } else {
            A = C(n - 1, m - 1);
            for (int j = 2; j <= m; j++) {
                ll term = pow2[j - 2] * (j + 1) % MOD * C(n - j, m - j) % MOD;
                A = (A + term) % MOD;
            }
        }
        ll f = A * inv_pow2[n - 1] % MOD;
        ll ans = (ll)k * f % MOD;
        cout << ans << '\n';
    }
    return 0;
}