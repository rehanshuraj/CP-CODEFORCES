#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){ // 10 11 12 13 15 22
        long long n,k;
        cin>>n>>k;
        vector<long long> a(n);
        long long sum=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum+=a[i];
        }
        sort(a.begin(),a.end());
        vector<long long> prefix(n+1, 0);
        for(int i = 0; i < n; i++){
            prefix[i+1] = prefix[i] + a[i];
        }
        long long ans=INT_MIN;
        for(int x=0; x<=k; x++){
            long long left=2*x;
            long long right=k-x;
            long long removed=0;
            removed+=prefix[left];
            removed+=prefix[n]-prefix[n-right];
            ans=max(ans,sum-removed);
        }
        cout<<ans<<endl;
    }
}
