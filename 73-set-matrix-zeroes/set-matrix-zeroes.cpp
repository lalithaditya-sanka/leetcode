class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        vector<int> vec1(rows, -1);
        vector<int> vec2(cols, -1);

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == 0) {
                    vec1[i] = 1;
                    vec2[j] = 1;
                }
            }
        }

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (vec1[i] == 1 || vec2[j] == 1) {
                    matrix[i][j] = 0;
                }
            }
        }

        return;
    }
};