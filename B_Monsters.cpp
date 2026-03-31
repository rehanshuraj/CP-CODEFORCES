#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        long long n,k;cin>>n>>k;
        vector<long long> a(n);
        for(long long i=0; i<n; i++){
            cin>>a[i];
        }
        for(long long i=0; i<n; i++){
            a[i] = (a[i]%k);
        }
        vector<pair<long long,long long>> index_pair(n);
        for(long long i=0; i<n; i++){
            if(a[i]==0) a[i]=k;
            index_pair[i]={a[i],i+1};
        }
        // for(auto &it : index_pair){
        //     if(it.first==0) it.second=k;
        // }
        sort(index_pair.begin(),index_pair.end(),[&](pair<long long,long long> a,pair<long long,long long> b){
            if(a.first != b.first)  return a.first>b.first;
            return a.second<b.second;
        });
        for(auto &it : index_pair){
            cout<<it.second<<" ";
        }
        cout<<endl;
    }
}