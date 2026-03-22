#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    long long c, k;
    cin >> n >> c >> k;
    
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
   
    sort(a.begin(), a.end());
    
    for (int i = 0; i < n; ++i) {
      
        if (a[i] > c) {
            break;
        }
        
       
        long long b = c - a[i];
        long long buff = min(k, b);
    
        k -= buff;
        c += (a[i] + buff);
    }
    
    cout << c << "\n";
}

int main() {
    // Optimize standard I/O operations for performance
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