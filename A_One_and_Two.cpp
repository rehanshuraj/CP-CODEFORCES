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
      long long total_two=0;
      long long current_two=0;

      for(int i=0; i<n; i++){
        if(a[i]==2) total_two++;
      }
      long long ans=-1;
      for(int i=0; i<n; i++){
        if(a[i]==2) current_two++;
        if(current_two == (total_two-current_two)){
            ans=i+1;
            break;
        }
      }

      cout<<ans<<endl;

    }
    return 0;
}

