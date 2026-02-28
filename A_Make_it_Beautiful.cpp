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
      sort(a,a+n);
      long long maxi=a[n-1];
      long long mini=a[0];

      if(maxi==mini){
        cout<<"NO"<<endl;
      }
      else{
        cout<<"YES"<<endl;
        cout<<maxi<<" ";
        for(int i=0; i<n-1; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
      }

    }
    return 0;
}

