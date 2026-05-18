#include<bits/stdc++.h>
using namespace std;
int binary_search(int val, vector<long long>& mx){
    int i=0,j=mx.size()-1;
    int ans=-1;
    while(i<=j){
        int mid=i+ (j-i)/2;
        if(mx[mid]>val){
            ans=mid;
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
    return ans;
}
int main(){
    int t;cin>>t;
    while(t--){
        long long n,q;
        cin>>n>>q;
        vector<long long> a(n),k(q);
        for(long long i=0; i<n; i++) cin>>a[i];
        for(long long i=0; i<q; i++) cin>>k[i];
        vector<long long> prefix(n),mx(n);
        prefix[0]=a[0];
        mx[0]=a[0];
        for(int i=1; i<n; i++){
           prefix[i]=prefix[i-1]+a[i];
           mx[i]=max(mx[i-1],a[i]);
        }
        vector<long long> ans(q);
        for(int i=0; i<q; i++){
            int val=k[i];
            int idx=binary_search(val,mx);
            if(idx == -1)
                ans[i] = prefix[n-1];
            else if(idx == 0)
                ans[i] = 0;
            else
                ans[i] = prefix[idx-1];
        }
        for(int i=0; i<q; i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}