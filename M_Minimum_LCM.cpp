#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;

        long long ans=1;
        for(long long i=1; i*i<=n; i++){
            if(n%i==0){
                if(i<=n/2) ans=max(ans,i);
                if(n/i <= n/2) ans=max(ans,n/i);
            }
        }
        cout<<ans<<" "<<n-ans<<endl;
    }
}