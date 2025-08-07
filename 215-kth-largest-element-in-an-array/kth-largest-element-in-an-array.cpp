class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        reverse(nums.begin(), nums.end());

        return nums[k-1];
    }
};