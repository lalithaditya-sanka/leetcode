class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for (int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
        }
        int maxi = 0;
        for (int i : st) {
            int ele = i;
            if (st.find(ele - 1) == st.end()) {
                int cur = 0;
                while (st.find(ele) != st.end()) {
                    cur += 1;
                    ele += 1;
                }
                maxi = max(cur, maxi);
            }
        }
        return maxi;
    }
};