#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ans=0;
bool pf(ll val,ll x,ll idx, ll mid){
   if((val +( (idx+1) *( mid-1))) <= x) return true;
   return false;
}
int binaryS(ll idx, ll val, ll x){
   int s=0,e=1e9+5;
   ll ans=0;
   while(s<=e){
     int mid=s+(e-s)/2;
     if(pf(val,x,idx,mid)){
      ans=mid;
      s=mid+1;
     }
     else e=mid-1;
   }
   return ans;
}
int main(){
   int t;cin>>t;
   while(t--){
    ll n,x;
    cin>>n>>x;
    vector<ll> a(n);
    ll ans=0;
    for(ll i=0; i<n; i++) cin>>a[i];
    sort(a.begin(),a.end());
    vector<ll> prefix(n);
    prefix[0]=a[0];
    for(ll i=1; i<n; i++) prefix[i]=prefix[i-1]+a[i];
    for(ll i=0; i<n; i++){
      ans += binaryS(i,prefix[i],x);
    }  
    cout<<ans<<endl;
   }
}