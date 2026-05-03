#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    int n,l,r;
    cin>>n>>l>>r;
    vector<ll> arr;
    for(int i=1; i<=n; i++){
        ll x =((l+i-1)/i) * i;
        arr.push_back(x);
        if(x>r){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    for(ll it: arr) cout<< it<<" ";
    cout<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--) solve();
}