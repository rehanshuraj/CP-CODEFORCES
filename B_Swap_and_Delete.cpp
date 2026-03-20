#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        int n=s.length();
        long long cnt0=0,cnt1=0;
        for(int i=0; i<n; i++){
            if(s[i]=='0') cnt0++;
            else cnt1++; 
        }

        long long l=0;
        for(int i=0; i<n; i++){
            if(s[i]=='0' && cnt1>0){
                cnt1--;
                l++;
            }
            else if(s[i]=='1' && cnt0>0){
                cnt0--;
                l++;
            }
            else break;
        }

        cout<<n-l<<endl;
    }
}