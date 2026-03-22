#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector <int> a(n),b(n);
        for (int i=0; i<n; i++) cin>>a[i];
        for (int i=0; i<n; i++) cin>>b[i];
        unordered_map <int,int> freq1, freq2;
        int pre = a[0];
        int count = 1;
        for (int i=1; i<n; i++) {
            if (pre==a[i]) count++;
            else {
                if (freq1.count(pre)) {
                    freq1[pre] = max(freq1[pre], count);
                }
                else freq1[pre]=count;
                pre = a[i];
                count = 1;
            }
        }
        pre = b[0];
        count = 1;
        for (int i=1; i<n; i++) {
            if (pre==b[i]) count++;
            else {
                if (freq2.count(pre)) {
                    freq2[pre] = max(freq2[pre], count);
                }
                else freq2[pre]=count;
                pre = b[i];
                count = 1;
            }
        }
        int ans = 0;
        for (auto p : freq1) {
            if (freq2.count(p.first)) ans = max(ans, p.second+freq2[p.first]);
            else ans = max(ans, p.second);
        }
        cout<<ans<<endl;
    }
    return 0;
}