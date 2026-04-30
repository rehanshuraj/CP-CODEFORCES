#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin>>a[i];
        int ans=0;
        for(int i=0; i<n; i++){
            ans=__gcd(ans,abs(a[i]-a[n-i-1]));
        }
        cout<<ans<<endl;
    }
}