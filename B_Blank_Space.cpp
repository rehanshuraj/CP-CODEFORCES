#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin>>a[i];
        int maxi=0;
        int zero=0;
        for(int i=0; i<n; i++){
            if(a[i]==0) zero++;
            else{
                maxi=max(maxi,zero);
                zero=0;
            }

        }
        maxi=max(maxi,zero);
        cout<<maxi<<endl;
    }
    return 0;
}

