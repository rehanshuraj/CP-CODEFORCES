#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD (ll)(1e9+7)

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n),b(n);
        for(int i=0; i<n; i++) cin>>a[i]; //O(n)
        for(int i=0; i<n; i++) cin>>b[i]; //O(n)

        sort(a.begin(),a.end()); //O(nlogn)
        sort(b.rbegin(),b.rend());//O(nlogn)
        long long ans=1;
        for(int i=0; i<n; i++){ //O(n)
            long long temp=upper_bound(a.begin(),a.end(),b[i])-a.begin(); //O(logn)
            long long cnt = a.size()-temp;
            ans= ans * max(cnt-i,0LL) % MOD;
        } ////O(nlogn)
        cout<<ans<<endl;

    }
}