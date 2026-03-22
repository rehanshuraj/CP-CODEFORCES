#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,d;
    cin>>n>>d;
    vector<long long> arr(n);
    for(long long i=0; i<n; i++) cin>>arr[i];
    sort(arr.begin(),arr.end());
    long long size=1,ans=0,left=-1,right=n-1;
    while(left<right){
       if(arr[right]*size <= d && left<right){
         left++;
         size++;
       }
       else{
        ans++;
        size=1;
        right--;
       }
    }
    
    cout<<ans<<endl;
}

        if (target >= 16384) {
            return -1;
        }
        
        vector<int> dp(16384, 1e9);
        dp[0] = 0;
        
        for (int num : nums) {
            vector<int> dp2(16384, 1e9);
            for (int x = 0; x < 16384; ++x) {
                if (dp[x] != 1e9) {
                    dp2[x ^ num] = min(dp2[x ^ num], dp[x]);
                    dp2[x] = min(next_dp[x], dp[x] + 1);
                }
            }
            dp = next_dp;
        }
        
        return dp[target] == 1e9 ? -1 : dp[target];




class Solution {
public:
    long long countGoodSubarrays(vector<int>& nums) {
        int n = nums.size();
        vector<int> left(n), right(n), leftbit(30, -1), rightbit(30, n);
        unordered_map<int, int> seen;
        long long ans = 0;
        
        for(int i = 0; i < n; i++){
            int x = -1;
            for(int j = 0; j < 30; j++){
                if(((nums[i] >> j) & 1) == 0){
                    x = max(x, leftbit[j]);
                }
            }
            int y = -1;
            if(seen.count(nums[i])){
                y = seen[nums[i]];
            }
            left[i] = max(x, y) + 1;
            
            for(int j = 0; j < 30; j++){
                if(((nums[i] >> j) & 1)){
                    leftbit[j] = i;
                }
            }
            seen[nums[i]] = i;
        }
        
        for(int i = n - 1; i >= 0; i--){
            int z = n;
            for(int j = 0; j < 30; j++){
                if(((nums[i] >> j) & 1) == 0){
                    z = min(z, rightbit[j]);
                }
            }
            right[i] = z - 1;
            
            for(int j = 0; j < 30; j++){
                if(((nums[i] >> j) & 1)){
                    rightbit[j] = i;
                }
            }
        } 
        for(int i = 0; i < n; i++){
            ans += (long long) (i - left[i] + 1) * (right[i] - i + 1);
        }
        
        return ans;
    }
};