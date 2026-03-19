#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cnt0=0,cnt1=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]=='0') cnt0++;
            else cnt1++;
        }
        if(min(cnt0,cnt1)%2==0) cout<<"NET"<<endl;
        else cout<<"DA"<<endl;
    }
}