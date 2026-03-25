#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        string s;cin>>s;
        int i=0,j=0;
        int ans=0;
        while(j<n){
           if(s[i]=='B' && s[i]==s[j]) j++;
           else{
            if((j-i+1)<k){
                ans+=(k-(j-i+1));
            }
            i=j+1;
           }
        }
        cout<<ans<<endl;
    }
}