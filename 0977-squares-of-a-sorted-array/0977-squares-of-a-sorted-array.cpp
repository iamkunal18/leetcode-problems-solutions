class Solution
{
    public:
        vector<int> sortedSquares(vector<int> &nums)
        {
            int left = 0;
            int right = nums.size() - 1;

            vector<int> ans(nums.size());
            int i = nums.size() - 1;
            while (left <= right)
            {
                if (abs(nums[left]) > abs(nums[right]))
                {
                    ans[i] = nums[left] *nums[left];
                    left++;
                }
                else
                {
                    ans[i] = nums[right] *nums[right];
                    right--;
                }
                i--;
            }
            return ans;
        }
};