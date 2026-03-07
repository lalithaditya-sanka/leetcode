class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;
        int tot = 0;
        for (int i = 0; i < nums.size(); i++) {
            tot += nums[i];
            int reqd = tot - k;
            cnt += mp[reqd];
            mp[tot] += 1;
        }
        return cnt;
    }
};