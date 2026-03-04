class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            int reqd = target - nums[i];
            if (mp.find(reqd) != mp.end()) {
                return {mp[reqd], i};
            }
            mp[nums[i]] = i;
        }
        return {-1, -1};
    }
};