#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t;
    
    while(t--){
        int n; 
        cin >> n;

        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        vector<long long> prefix(n);
        prefix[0] = a[0];

        for(int i = 1; i < n; i++){
            prefix[i] = prefix[i-1] + a[i];
        }

        long long ans = 0;

        for(int k = 1; k <= n; k++){
            if(n % k) continue;

            int start = k - 1;

            long long maxi = prefix[start];
            long long mini = prefix[start];

            for(int i = start + k; i < n; i += k){
                long long curr = prefix[i] - prefix[i - k];

                maxi = max(maxi, curr);  
                mini = min(mini, curr); 
            }

            ans = max(ans, maxi - mini);
        }

        cout << ans << endl;
    }
    0]>v