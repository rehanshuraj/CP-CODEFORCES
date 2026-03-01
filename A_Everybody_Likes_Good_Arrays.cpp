#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
      int n;cin>>n;
      long long a[n];
      for(int i=0;i <n; i++){
        cin>>a[i];
      }
      long long ans=0;
      for(int i=0; i<n-1; i++){
        if(a[i]%2==a[i+1]%2) ans++;
      }
      cout<<ans<<endl;
    }
    return 0;
}

class Solution {
public:
    long long power(long long base, long long expo, long long m) {
        long long res = 1;
        base %= m;
        while (expo > 0) {
            if (expo %2 ==1) res = (res * base) % m;
            base = (base * base) %m;
            expo/=2;
        }
        return res;
    }
    
    int sumOfNumbers(int l, int r, int k) {
        long long m = 1e9 + 7;
        long long sum = 0;
        for (int i=l; i<=r; i++) sum+=i;
        long long c = r-l+1;
        long long t1 = power(c, k-1, m);
        long long t2 = (power(10, k, m) - 1 + m)%m;
        long long i9 = power(9, m-2, m);
        long long ans = (sum*t1)%m;
        ans = (ans * t2) %m;
        ans = (ans * i9) %m;
        return ans;
    }
};©leetcode