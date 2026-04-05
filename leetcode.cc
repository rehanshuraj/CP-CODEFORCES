class Solution {
public:

    long long cost(int i, vector<int>& nums){
        long long target = max(nums[i-1], nums[i+1]) + 1LL;
        return max(0LL, target - nums[i]);
    }
    
    long long minIncrease(vector<int>& nums) {
        int n = nums.size();
        
        if (n % 2 == 1) {
            long long ops = 0;
            for(int i = 1; i < n - 1; i += 2){
                ops += cost(i, nums);
            }
            return ops;
        }
        
        int m = (n - 2) / 2;
        vector<long long> pref(m + 1, 0), suff(m + 1, 0);
        
        for(int i = 0; i < m; i++){
            pref[i + 1] = pref[i] + cost(2 * i + 1, nums);
        }

        for(int i = m - 1; i >= 0; i--){
            suff[i] = suff[i + 1] + cost(2 * i + 2, nums);
        }
        
        long long mini = 1e18;
        for(int k = 0; k <= m; k++){
            mini = min(mini, pref[k] + suff[k]);
        }
        
        return mini;
    }
};