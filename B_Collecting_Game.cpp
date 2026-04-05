#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<pair<int,int>> a(n);
        for(int i=0; i<n; i++){
            int temp;
            cin>>temp;
            a[i].first=temp;
            a[i].second=i;
        }
        sort(a.begin(),a.end());
        vector<long long> prefix(n);
        prefix[0]=a[0].first;
        for(int i=1; i<n; i++){
            prefix[i]=prefix[i-1]+a[i].first;
        }
        vector<int> ans(n);
        ans[a[n-1].second]=n-1;
        for(int i=n-2; i>=0; i--){
            if(prefix[i]>=a[i+1].first){
                ans[a[i].second]= ans[a[i+1].second];
            }
            else ans[a[i].second]=i;
        }
        for(int i=0; i<n; i++) cout<<ans[i]<<" ";
        cout<<endl;
    }
}