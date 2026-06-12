#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> one(k, 0);
        string s;
        cin >> s;
        for (int i = 0; i < n; ++i) {
            if (s[i] == '1') one[i % k]++;
        }

        bool f = true;
        for (int i = 0; i < k; ++i) {
            if (one[i] % 2 != 0) {
                f = false;
                break;
            }
        }

        if (f) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}