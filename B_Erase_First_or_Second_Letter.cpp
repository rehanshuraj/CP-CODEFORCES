#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        map<char,int> freq;
        int ans=0;
        int cnt=0;
        //use frequency map to count the frequency of each character in the string
        for(int i=0; i<n; i++){
           freq[s[i]]++;
           if(freq[s[i]]==1) cnt++;
           ans+=cnt;
        }
        cout<<ans<<endl;
    }
}

