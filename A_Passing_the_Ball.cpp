#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        long long ans=2;
        int i=1;
        while(i<n){
            if(s[i]=='R') ans++;
            else break;
            i++;
        }
        cout<<ans<<endl;
    }
}