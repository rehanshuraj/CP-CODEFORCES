#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    while(q--) {
        int n;cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++) cin>>arr[i];
        int maxi=INT_MIN;
        for(int start = 0; start < n; start++) {
           for(int end = start; end < n; end++) {

              int sum=0;
              for(int i = start; i <= end; i++) {
                sum+=arr[i];
              }
              maxi=max(maxi,sum/(end-start+1));
           }
        }
        cout<<maxi<<endl;
    }

    return 0;
}
