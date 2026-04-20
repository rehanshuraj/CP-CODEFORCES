#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,k,a,b;cin>>n>>k>>a>>b;
        vector<long long> cordx(n+1),cordy(n+1);
        for(int i=1; i<=n; i++) cin>>cordx[i]>>cordy[i];

        long long ans = abs(cordx[a]-cordx[b]) + abs(cordy[a]-cordy[b]);
        long long minia=1e17,minib=1e17;
        for(int i=1; i<=k; i++){
            minia= min(minia, (abs(cordx[a]-cordx[i]) + abs(cordy[a]-cordy[i])));
            minib= min(minib, (abs(cordx[b]-cordx[i]) + abs(cordy[b]-cordy[i])));
        }
        ans=min(ans,minia+minib);
        cout<<ans<<endl;

    }
}