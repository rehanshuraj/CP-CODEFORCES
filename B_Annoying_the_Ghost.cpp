#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            vector<int> a(n),b(n);
            for (int i = 0; i < n; ++i) cin >> a[i];
            for (int i = 0; i < n; ++i) cin >> b[i];

            vector<bool> visit(n, false);
            vector<int> x(n);
            bool flag=true;
            for (int j = 0; j < n; ++j) {
                int besti = -1;
                for (int i = 0; i < n; ++i) {
                    if (!visit[i] && a[i] <= b[j]) {
                        besti = i;
                        break;
                    }
                } 
                if (besti == -1) {
                    cout << -1 << "\n";
                    flag=false;
                    break;
                }
                x[j] = besti;
                visit[besti] = true;
            }
            if(flag){
                long long ans = 0;
                for (int i = 0; i < n; ++i) {
                    for (int j = i + 1; j < n; ++j) {
                        if (x[i] > x[j]) ans++;
                    }
                }
                cout << ans << endl;
            }
        }
    }
}
