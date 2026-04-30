#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a(n);
        long long total=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            total+=a[i];
        }

        long long ans=0;
        long long sum=0;
        for(int i=0; i<n-1; i++){
            sum+=a[i];
            ans=max(ans,__gcd(total-sum,sum));
        }
        cout<<ans<<endl;
    }
}