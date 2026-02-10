#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        ll n, k;
        cin >> n >> k;
        ll left = 0, right = n;
        ll ans = 0;
        
        while (left <= right) {
            ll mid = left + (right - left) / 2;
            ll m = n - mid;
            ll total_added = m * (m + 1) / 2;
            if (total_added == mid + k) {
                ans = mid;
                break;
            } else if (total_added < mid + k) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}