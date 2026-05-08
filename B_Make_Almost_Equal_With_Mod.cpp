#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        long long n;cin>>n;
        long long arr[n];
        for(long long i=0; i<n; i++) cin>>arr[i];
        long long ans=0;
        for(int i=1; i<=60; i++){
            set<long long> st;
            long long mod=1LL<<i;
            for(int j=0; j<n; j++){
                st.insert(arr[j]%mod);
            }
            if(st.size() == 2){
                ans=mod;
                break;
            }
        }
        cout<<ans<<endl;
    }
    
}