class Solution {
public:
     void permutation(vector<int>& nums, vector<vector<int>>& ans, int                               strtIdx, int endIdx) {
       
        if(strtIdx == endIdx && find(ans.begin(), ans.end(), nums)
            == ans.end()) {
            ans.push_back(nums);
        } else {
            for(int i = strtIdx; i <= endIdx; i++) {
                swap(nums[strtIdx], nums[i]);
                permutation(nums, ans, strtIdx+1, endIdx);
                swap(nums[strtIdx], nums[i]);
                
            }   
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        
        permutation(nums, ans, 0, nums.size()-1);
        return ans;
    }
};