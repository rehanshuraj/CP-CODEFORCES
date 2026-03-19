#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<long long> a(n*k);
        for(int i=0; i<n*k; i++) cin>>a[i];
        long long ans=0;
        int pointer=n*k;
        while(k--){
            pointer-=(n/2+1);
            ans+=a[pointer];
        }
        cout<<ans<<endl;
    }
}