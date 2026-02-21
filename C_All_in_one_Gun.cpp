#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
       int n; cin>>n;
       long long h,k; cin>>h>>k;
       vector<long long> arr(n);
       long long sum=0;
       for(int i=0;i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
       }
       vector<long long > prefix(n);
       vector<long long > mini(n);
       prefix[0]=arr[0];
       mini[0]=arr[0];

       for(int i=1; i<n; i++){
         prefix[i] = prefix[i - 1] + arr[i];
       }
       for(int i=1; i<n; i++){
         mini[i] = min(mini[i - 1] , arr[i]);
       }
        long long ans=-1;
        vector<long long> mx(n + 1, 0); 
        for (int i = n - 1; i >= 0; i--) {
            mx[i] = max(mx[i + 1], arr[i]);
        }
        for (int p = 1; p <= n; p++) {
            long long gain = max(0LL, mx[p] - mini[p - 1]);
            long long Mp = prefix[p - 1] + gain;
            
            long long c = 0;
            if (h > Mp) c = (h - Mp + sum - 1) / sum;
            long long currtime = c*(n + k) + p;
            if (ans == -1 || currtime < ans) ans = currtime;
        }
        cout<<ans<<endl;
    }
    
}