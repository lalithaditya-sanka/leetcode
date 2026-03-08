class Solution {
private:
    int fun(vector<int>& nums, int low, int mid, int high) {
        int count = 0;
        int i = low;
        int j = mid+1;
        while (i <= mid) {
            while (j <= high && (long long)nums[i] > 2LL * nums[j])
                j++;
            count += j - (mid+1);
            i++;
        }
        return count;
    }

    void merge(vector<int>& nums, int low, int mid, int high) {
        vector<int> temp;
        int i = low;
        int j = mid+1;
        while (i <= mid and j <= high) {
            if (nums[i] < nums[j]) {
                temp.push_back(nums[i]);
                i++;
            }
            else {
                temp.push_back(nums[j]);
                j++;
            }
        }
        while (i <= mid) {
            temp.push_back(nums[i]);
            i++;
        }
        while (j <= high) {
            temp.push_back(nums[j]);
            j++;
        }
        int index = 0;
        for (i = low; i <= high; i++) {
            nums[i] = temp[index++];
        }
    }

    int mergeSort(vector<int>& nums, int low, int high) {
        int count = 0;
        if (low >= high) return 0;
        int mid = low + (high - low) / 2;
        count += mergeSort(nums, low, mid);
        count += mergeSort(nums, mid+1, high);
        count += fun(nums, low, mid, high);
        merge(nums, low, mid, high);
        return count;
    }

public:
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size()-1);
    }
};