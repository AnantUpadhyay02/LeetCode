class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int index = nums.size();
        return nums[index-k];
        
    }
};