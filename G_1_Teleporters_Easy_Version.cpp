#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> cost;
        for(int i=1; i<=n; i++){
            int a;cin>>a;
            cost.push_back(i+a);
        }
        sort(cost.begin(),cost.end());
        int i=0;
        int ans=0;
        while(i<n && k>=cost[i]){
            k-=cost[i];
            ans++;
            i++;
        }
        cout<<ans<<endl;
    }
}