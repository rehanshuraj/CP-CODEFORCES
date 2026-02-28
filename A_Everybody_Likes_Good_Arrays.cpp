#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
      int n;cin>>n;
      long long a[n];
      for(int i=0;i <n; i++){
        cin>>a[i];
      }
      long long ans=0;
      for(int i=0; i<n-1; i++){
        if(a[i]%2==a[i+1]%2) ans++;
      }
      cout<<ans<<endl;
    }
    return 0;
}

