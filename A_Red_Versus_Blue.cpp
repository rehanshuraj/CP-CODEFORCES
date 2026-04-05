#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        long long n,r,b;cin>>n>>r>>b;
        long long maxi_r= r/(b+1);
        long long remaining_r=r%(b+1);
        long long using_b=b;
        string ans="";
        for(int i=1; i<=(b+1); i++){
            for(int j=1; j<=maxi_r; j++){
                ans+='R';
            }
            if(remaining_r>0 && remaining_r--) ans+='R';
            if(using_b--) ans+='B';
        }
        cout<<ans<<endl;
    }
}