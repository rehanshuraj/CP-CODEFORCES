#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin>>n>>s;
        unordered_map <char, int> freq;
        for (char c : s) freq[c]++;
        unordered_set <char> pre;
        int ans = 0;
        for (int i=0; i<n-1; i++) {
            freq[s[i]]--;
            if (freq[s[i]]==0) freq.erase(s[i]);
            pre.insert(s[i]);
            int temp = pre.size()+freq.size();
            ans = max(ans, temp);
        }
        cout<<ans<<endl;
    }
    return 0;
}