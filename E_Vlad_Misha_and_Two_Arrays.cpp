#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;

long long fact[500005];
long long a[500005];
long long prod = 1;

void precompute() {
    fact[0] = 1;
    for (int i = 1; i <= 500000; i++) fact[i] = (fact[i - 1] * i) % MOD;
}

long long power(long long base, long long exp) {
    long long result = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return result;
}

long long modInverse(long long n) {
    return power(n, MOD - 2);
}

bool solve(int L, int R) {
    if (L > R) return true;
    int rt = -1;
    for (int d = 0; L + d <= R - d; ++d) {
        int i1 = L + d;
        if (a[i1] == 1LL * (i1 - L + 1) * (R - i1 + 1)) {
            rt = i1;
            break;
        }
        int i2 = R - d;
        if (a[i2] == 1LL * (i2 - L + 1) * (R - i2 + 1)) {
            rt = i2;
            break;
        }
    }
    if (rt == -1) return false;
    prod = (prod * (R - L + 1)) % MOD;
    return solve(L, rt - 1) && solve(rt + 1, R);
}

void solve_tc() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    prod = 1;
    if (solve(1, n)) {
        long long ans = (fact[n] * modInverse(prod)) % MOD;
        cout << ans << "\n";
    } else cout << 0 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    precompute();
    int t;
    if (cin >> t) {
        while (t--) {
            solve_tc();
        }
    }
    return 0;
}