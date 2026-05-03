#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;
int main(){
    int t;cin>>t;
    while(t--){
        long long n;cin>>n;
        long long ans = ((((n * (n + 1)) % mod) * (4 * n - 1)) % mod * 337) % mod;
        cout<<ans<<endl;
    }
}