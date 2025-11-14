#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool ok = false;
        unordered_map<char,int> mp(n);
        mp[s[0]]=1;
        mp[s[n-1]]=1;
        for(int i=1; i<n-1; i++){
            mp[s[i]]++;
            if(mp[s[i]]>=2){
                ok=true;
                break;
            }
        }
        cout << (ok ? "Yes" : "No") << "\n";
    }
}
