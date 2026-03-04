class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int tot = 0;
        for (int i = 0; i < nums.size(); i++) {
            tot += nums[i];
            maxi = max(maxi, tot);
            if (tot < 0) tot = 0;
        }
        return maxi;
    }
};