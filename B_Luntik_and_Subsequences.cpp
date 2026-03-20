#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        long long n;cin>>n;
        vector<long long> a(n);
        long long cnt0=0,cnt1=0;
        for(long long i=0; i<n; i++){
            cin>>a[i];
            if(a[i]==0) cnt0++;
            if(a[i]==1) cnt1++;
        }
        long long ans=pow(2,cnt0)*cnt1;
        cout<<ans<<endl;
    }
}