#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;cin >> n;
        string s;cin >> s;
        int one = 0, zero = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') one++;
            else zero++;
        }
        
        int c1 = (one % 2 == 0) ? one : 1e9;
        int c2 = (zero % 2 == 1) ? zero : 1e9;
        
        if (c1 == 1e9 && c2 == 1e9) cout << "-1"<<endl;
        else if (c1 < c2) {
            cout << c1 << "\n";
            if (c1 > 0) {
                for (int i = 0; i < n; i++) {
                    if (s[i] == '1') cout << i + 1 << " ";
                }
                cout << "\n";
            }
        }
         else {
            cout << c2 << "\n";
            if (c2 > 0) {
                for (int i = 0; i < n; i++) {
                    if (s[i] == '0') cout << i + 1 << " ";
                }
                cout << "\n";
            }
        }
    }
    return 0;
}