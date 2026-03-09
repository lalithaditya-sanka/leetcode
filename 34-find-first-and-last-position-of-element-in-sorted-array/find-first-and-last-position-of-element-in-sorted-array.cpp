class Solution {
private:
    int firstPosition(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] >= target) high = mid-1;
            else low = mid+1;
        }
        return low;
    }
    int lastPosition(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] > target) high = mid-1;
            else low = mid+1;
        }
        return high;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if (nums.size() == 0) return {-1, -1};
        if (nums.back() < target) return {-1, -1};
        int ind1 = firstPosition(nums, target);
        int ind2 = lastPosition(nums, target);
        if (nums[ind1] != target) return {-1, -1};
        return {ind1, ind2};
    }
};