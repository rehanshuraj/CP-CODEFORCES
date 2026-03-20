#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;cin>>t;
    while(t--){
        long long n,k,q;
        cin>>n>>k>>q;
        vector<long long> arr(n);
        for(long long i=0; i<n; i++) cin>>arr[i];
        for(long long i=0; i<n; i++){
            if(arr[i]>q) arr[i]=0;
            else arr[i]=1;
        }
        long long ans=0;
        long long cnt1=0;
        for(long long i=0; i<n; i++){
            if(arr[i]==1){
                cnt1++;
            }
            else{
                if(cnt1>=k){
                    long long ways=cnt1-k+1;
                    ans+=(ways*(ways+1))/2;
                }
                cnt1=0;
            }
        }
        if(cnt1>=k){
            long long ways=cnt1-k+1;
            ans+=(ways*(ways+1))/2;
        }
        cout<<ans<<endl;
    }
}