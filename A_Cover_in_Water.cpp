#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;cin>>n;
        string s;cin>>s;
        bool flag=false;
        int cnt=0;
        for(int i=0;i <n ;i++){
            if(s[i]=='.' && (s[i+1]=='.' && i+1<n) && (s[i+2]=='.' && i+2<n)) flag=true;
            if(s[i]=='.') cnt++;
        }
        if(flag) cout<<2<<endl;
        else cout<<cnt<<endl;
    }
    
    return 0;
}