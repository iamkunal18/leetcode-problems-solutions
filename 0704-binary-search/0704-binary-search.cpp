class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        
        while(start <= end) {
            if(start > end) return -1;
            int mid = start + (end - start)/2;
            if(nums[mid] == target) return mid;
            if(nums[mid] > target) end = mid-1;
            if(nums[mid] < target) start = mid+1;
        }
        return -1;
    }
};