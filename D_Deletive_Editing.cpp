#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        vector<int> freq(26, 0);
        for(int i=0; i<t.length(); i++) freq[t[i]-'A']++;

        for(int i=s.length()-1; i>=0; i--){
            if(freq[s[i]-'A']>0) freq[s[i]-'A']--;
            else s[i]='.';
        }
        string ans="";
        for(int i=0; i<s.length(); i++){
            if(s[i]!='.') ans+=s[i];
        }

        if(ans==t) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}