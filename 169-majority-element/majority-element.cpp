class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int el = nums[0];
        int cnt = 1;
        for (int i = 1; i < n; i++) {
            if (cnt == 0) {
                el = nums[i];
                cnt = 1;
            }
            else if (nums[i] == el) cnt++;
            else cnt--;
        }
        int freq = 0;
        for (int i = 0; i < n; i++) {   // check if el is majority element
            if (nums[i] == el) freq++;
        }
        return (freq > n/2) ? el : -1;
    }
};