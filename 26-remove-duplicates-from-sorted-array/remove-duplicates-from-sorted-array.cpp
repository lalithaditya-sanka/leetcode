class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ptr = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[ptr] != nums[i]) {
                ptr++;
                nums[ptr] = nums[i];
            }
        }
        return ptr + 1;
    }
};