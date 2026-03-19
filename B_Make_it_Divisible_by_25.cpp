#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        long long  n;cin>>n;
        string s=to_string(n);
        long long ans=1e9;

        vector<string> pairs={"00","25","50","75"};

        for(auto& p: pairs){
            long long j=s.length()-1;

            while(j>=0 && p[1]!=s[j]){
                j--;
            }
            if(j<0) continue;

            long long i=j-1;
            while(i>=0 && s[i]!=p[0]){
                i--;
            }
            if(i<0) continue;

            long long cur = (s.length() - j - 1) + (j - i - 1); 
            ans=min(ans,cur);
        }

        cout<<ans<<endl;
    }
}