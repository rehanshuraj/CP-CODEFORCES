#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int open=0;
        int close=0;
        for(int i=0;i<n;i++){
            if(s[i]==')') close++;
            else open++;
        }
        if(open!=close) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}