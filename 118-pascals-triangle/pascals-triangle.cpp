class Solution {
private:
    vector<int> fun(int n) {
        vector<int> ans;
        int val = 1;
        ans.push_back(val);
        for (int i = 0; i < n; i++) {
            val = val * (n-i);
            val = val / (i+1);
            ans.push_back(val);
        }
        return ans;
    }

public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int i = 0; i < numRows; i++) {
            vector<int> vec = fun(i);
            ans.push_back(vec);
        }
        return ans;
    }
};