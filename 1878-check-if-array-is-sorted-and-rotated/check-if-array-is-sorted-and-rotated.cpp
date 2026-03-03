class Solution {
public:
    bool check(vector<int>& nums) {
        int cnt = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i-1] > nums[i]) cnt++;
            if (cnt > 1) return false;
        }
        if (cnt == 0) return true;
        return nums.front() >= nums.back();
    }
};