#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        long long n, x, y, z;
        cin >> n >> x >> y >> z;
        long long noai = (n + (x + y) - 1) / (x + y);

        long long ai = 0;
        
        if (n <= z * x) ai = (n + x - 1) / x;
        else {
            long long rn = n - (z * x);
            long long ns = x + 10 * y;
            long long remaining_time = (rn + ns - 1) / ns;
            ai = z + remaining_time;
        }
        cout << min(noai, ai) << "\n";
    }
    
    return 0;
}