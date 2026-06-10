#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
   int t;cin>>t;
   while(t--){
    ll n,x;
    cin>>n>>x;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin>>a[i];
    ll ans=0;
    sort(a.begin(),a.end());
    int inc=0;
    while(a[0]<x){
       int cnt=0;
       ll sum=0;
       for(ll i=0; i<n; i++){
          a[i]+=inc;
          sum+=a[i];
          if(sum>x) break;
          cnt++;
       }
       ans+=cnt;
       inc++;
    }
    cout<<ans<<endl;
   }
}