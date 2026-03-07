class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++) {
            if (i > 0 and nums[i-1] == nums[i]) continue;
            int j = i + 1;
            int k = n - 1;
            while (j < k) {
                if (nums[i] + nums[j] + nums[k] == 0) {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    k--;
                    while (j < k and nums[j-1] == nums[j]) j++;
                    while (j < k and nums[k+1] == nums[k]) k--;
                }
                else if (nums[i] + nums[j] + nums[k] > 0) k--;
                else j++;
            }
        }
        return ans;
    }
};