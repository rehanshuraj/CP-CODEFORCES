#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n),b(n);
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];
        
        unordered_map<int,int> mapa,mapb;
        for(int i=0; i<n;){
            int j=i;
            while(j<n && a[i]==a[j]){
                j++;             
            }
            mapa[a[i]]=max(mapa[a[i]],j-i);
            i=j;
        }
        for(int i=0; i<n; ){
            int j=i;
            while(j<n && b[i]==b[j]){
                j++;             
            }
            mapb[b[i]]=max(mapb[b[i]],j-i);
            i=j;
        }
        int ans=1;
        for(auto& it: mapa){
            int common=it.first;
            int value=mapa[common]+mapb[common];
            ans=max(ans,value);
        }
        for(auto& it: mapb){
            int common=it.first;
            int value=mapa[common]+mapb[common];
            ans=max(ans,value);
        }
        cout<<ans<<endl;
        
    }
}