class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++) {
            if (i > 0 and nums[i-1] == nums[i]) continue;
            for (int j = i+1; j < n; j++) {
                if (j > i+1 and nums[j-1] == nums[j]) continue;
                int k = j + 1;
                int l = n - 1;
                while (k < l) {
                    long long sum = nums[i] + nums[j];
                    sum += nums[k] + nums[l];
                    if (sum == target) {
                        ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                        k++;
                        l--;
                        while (k < l and nums[k-1] == nums[k]) k++;
                        while (k < l and nums[l+1] == nums[l]) l--;
                    }
                    else if (sum > target) l--;
                    else k++;
                }
            }
        }
        return ans;
    }
};