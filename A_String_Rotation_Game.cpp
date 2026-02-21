#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;
        
        int maxi = 0;
        for (int i = 0; i < n; i++) {
            string r = str.substr(i) + str.substr(0, i);
            int c = 1;
            for (int j = 1; j < n; j++) {
                if (r[j] != r[j - 1]) {
                    c++;
                }
            }
            maxi = max(maxi, c);
        }
        cout << maxi << endl;
    }
    return 0;
}