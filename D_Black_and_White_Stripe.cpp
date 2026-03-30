#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        string s;cin>>s;
        vector<int> prefix(n+1);
        int curr=0;
        for(int i=0;i<n; i++){
            if(s[i]=='W') curr++;
            prefix[i+1]=curr;
        }
        int ans=INT_MAX;
        for(int i=k; i<=n; i++){
            ans=min(ans,prefix[i]-prefix[i-k]);
        }
        cout<<ans<<endl;
    }
}